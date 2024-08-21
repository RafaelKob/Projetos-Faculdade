<?php include("../config/config.php"); ?>

<?php include(SITE_ROOT."/user/config/config.php"); ?>

<?php
if (isset($_GET["a"])) {
	if (isset($_COOKIE["carrinho"])) {
		if (strpos($_COOKIE["carrinho"], "'".$_GET["a"]."'") === false) {
			setcookie("carrinho", $_COOKIE["carrinho"].",'".$_GET["a"]."'", time()+60*60*24*30);
		}
	} else {
		setcookie("carrinho", "'".$_GET["a"]."'", time()+60*60*24*30);
	}
	header("Location: ".SITE_URL."/user/carrinho.php");
	exit;
} elseif (isset($_GET["r"])) {
	if (isset($_COOKIE["carrinho"])) {
		if (strpos($_COOKIE["carrinho"], "'".$_GET["r"]."'") !== false) {
			$carrinho = $_COOKIE["carrinho"];
			$carrinho = str_replace(",'".$_GET["r"]."'," , ",", $carrinho);
			$carrinho = str_replace("'".$_GET["r"]."'," , "", $carrinho);
			$carrinho = str_replace(",'".$_GET["r"]."'" , "", $carrinho);
			$carrinho = str_replace("'".$_GET["r"]."'" , "", $carrinho);
			setcookie("carrinho", $carrinho, time()+60*60*24*30);
		}
	}
	header("Location: ".SITE_URL."/user/carrinho.php");
	exit;
} elseif (isset($_GET["f"])) {
	setcookie("carrinho", "", time()+60*60*24*30);
	header("Location: ".SITE_URL."/user/finalizar.php?total=".$_GET["total"]);
	exit;
}
?>

<?php include(SITE_ROOT."/layout/header.php"); ?>

<h2>USUÁRIO / CARRINHO</h2>

<a href="<?=SITE_URL;?>/user/" style="color: black;">+ Adicionar produtos</a><br><br>

<?php
if (isset($_COOKIE["carrinho"])) {
	$dbObj = new mysql();
	$sql = "";
	$sql .= " SELECT produto.id as id,
					 produto.nome as nome,
					 produto.preco as preco,
					 produto.id_categoria as id_categoria_fk,
	                 categoria.id as id_categoria,
	                 categoria.nome_cat as nome_categoria
			FROM produto inner join categoria on produto.id_categoria = categoria.id";
	$sql .= " WHERE produto.id IN (".$_COOKIE["carrinho"].") ";
	$sql .= " ORDER BY nome ";
	$result = $dbObj->query($sql);
	if ($result) {
		if (mysqli_num_rows($result) > 0) {
			?>
			<table border="1px" align="center">
				<tr>
					<th>Nome</th>
					<th>Preço</th>
					<th>Categoria</th>
					<th>Carrinho</th>
				</tr>
				<?php
				$total = 0;
				while ($row = mysqli_fetch_assoc($result)) {
					$total += $row["preco"];
					?>
					<tr>
						<td><?=$row["nome"];?></td>
						<td><?=$row["preco"];?></td>
						<td><?=$row["nome_categoria"];?></td>
						<td align="center"><a href="<?=SITE_URL;?>/user/carrinho.php?r=<?=$row["id"];?>" style="color: black;">-</a><br><br></td>
					</tr>
					<?php
				}
			?>
			</table>
			<br>
			Total: R$ <?=$total;?>
			<br><br>
			<a href="<?=SITE_URL;?>/user/carrinho.php?f=sim&total=<?=$total;?>"><input type="button" value="FINALIZAR"></a>
			<br>
			<?php
		}
	}
}
?>

<br><a href="<?=SITE_URL;?>/user/" style="color: black;">Voltar</a>

<?php include(SITE_ROOT."/layout/footer.php"); ?>
