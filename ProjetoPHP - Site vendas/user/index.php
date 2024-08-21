<?php include("../config/config.php"); ?>

<?php include(SITE_ROOT."/user/config/config.php"); ?>

<?php include(SITE_ROOT."/layout/header.php"); ?>

<a href="<?=SITE_URL;?>">Inicio</a>

<h2>USUÁRIO</h2>

<form>
	<table align="center">
		<td>Produto</td>
		<td><input type="text" name="kw" value="<?=isset($_GET["kw"])?$_GET["kw"]:"";?>"></td> 
		<td>Categoria </td>
		<td><input type="text" name="ckw" value="<?=isset($_GET["ckw"])?$_GET["ckw"]:"";?>"></td>
		<td><input type="submit" value="BUSCAR"></td>
	</table>
</form>

<a href="<?=SITE_URL;?>/user/carrinho.php"><img src="<?=SITE_URL;?>/user/img/carrinho.png" width="50px"></a><br><br>

<?php
$dbObj = new mysql();
$sql = "";
$sql .= "SELECT produto.*, categoria.nome_cat as nome_categoria from produto
			inner join categoria 
			on categoria.id = produto.id_categoria";
if (isset($_GET["kw"]) && $_GET["kw"]!='' && isset($_GET["ckw"]) && $_GET["ckw"]=='') {
	$sql .= " WHERE produto.nome LIKE '%".$_GET["kw"]."%'";
} else if (isset($_GET["ckw"]) && $_GET["ckw"]!='' && isset($_GET["kw"]) && $_GET["kw"]=='') {
	$sql .= " WHERE categoria.nome_cat LIKE '%".$_GET["ckw"]."%'";
} else if (isset($_GET["ckw"]) && $_GET["ckw"]!='' && isset($_GET["kw"]) && $_GET["kw"]!='') {
	$sql .= " WHERE categoria.nome_cat LIKE '%".$_GET["ckw"]."%' and produto.nome LIKE '%".$_GET["kw"]."%'";
}
$sql .= " ORDER BY nome; ";
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
			while ($row = mysqli_fetch_assoc($result)) {
				?>
				<tr>
					<td><?=$row["nome"];?></td>
					<td><?=$row["preco"];?></td>
					<td><?=$row["nome_categoria"];?></td>
					<td align="center"><a href="<?=SITE_URL;?>/user/carrinho.php?a=<?=$row["id"];?>" style="color: black;">+</a><br><br></td>
				</tr>
				<?php
			}
		?>
		</table>
		<?php
	}
}
?>

<br><a href="<?=SITE_URL;?>/user/carrinho.php"><img src="<?=SITE_URL;?>/user/img/carrinho.png" width="50px"></a>

<?php include(SITE_ROOT."/layout/footer.php"); ?>
