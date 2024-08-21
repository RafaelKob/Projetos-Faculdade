<?php

include("../../config/config.php");
include(SITE_ROOT."/admin/config/config.php");

validaSessao();

$dbObj = new mysql();
$sql = "SELECT produto.*, categoria.nome_cat as nome_categoria 
		FROM produto inner join categoria on produto.id_categoria = categoria.id 
		WHERE produto.id = '".$_GET["id"]."' and produto.id_conta = '".$_SESSION["CONTA_ID"]."';";
$result = $dbObj->query($sql);
if ($result && mysqli_num_rows($result) == 1) {
	$row = mysqli_fetch_assoc($result);
	extract($row);
} else {
	header("Location: ".SITE_URL."/admin/produtos");
	exit;
}

if (!$id) {
	header("Location: ".SITE_URL."/admin/produtos");
	exit;
}

if (isset($_GET["a"]) && $_GET["a"] == "sim") {
	$dbObj = new mysql();
	$sql = "DELETE FROM produto WHERE id = '".$id."';";
	$result = $dbObj->query($sql);
	header("Location: ".SITE_URL."/admin/produtos");
	exit;
}

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>APAGAR PRODUTO</h2>

<table align="center">
	<tr>
		<td style="text-align: right;">Nome:</td>
		<td><?=isset($nome)?$nome:"";?></td>
	</tr>
	<tr>
		<td style="text-align: right;">Preço:</td>
		<td><?=isset($preco)?$preco:"";?></td>
	</tr>
	<tr>
		<td style="text-align: right;">Categoria:</td>
		<td><?=isset($nome_categoria)?$nome_categoria:"";?></td>
	</tr>
	<tr>
		<td style="text-align: right;">
			<a href="<?=SITE_URL;?>/admin/produtos/apagar.php?id=<?=$id;?>&a=sim"><button type="button" name="sim">SIM</button></a>
		</td>
		<td>
			<a href="<?=SITE_URL;?>/admin/produtos/"><button type="button" name="nao">NÃO</button></a>
		</td>
	</tr>
</table>

<?php

include(SITE_ROOT."/layout/footer.php");

?>
