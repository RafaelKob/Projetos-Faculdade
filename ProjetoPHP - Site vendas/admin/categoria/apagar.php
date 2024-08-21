<?php

include("../../config/config.php");
include(SITE_ROOT."/admin/config/config.php");

validaSessao();

$dbObj = new mysql();
$sql = "SELECT * FROM categoria WHERE id = '".$_GET["id"]."';";
$result = $dbObj->query($sql);

if ($result) {
	if (mysqli_num_rows($result) == 1) {
		$row = mysqli_fetch_assoc($result);
		extract($row);
	}
}
	
if (!$id) {
	header("Location: ".SITE_URL."/admin/categoria");
	exit;
}

if (isset($_GET["a"]) && $_GET["a"] == "sim") {
	$dbObj = new mysql();
	$sql = "DELETE FROM categoria WHERE id = '".$id."';";
	$result = $dbObj->query($sql);
	header("Location: ".SITE_URL."/admin/categoria");
	exit;
}

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>APAGAR CATEGORIA</h2>


<table align="center">
	<tr>
		<td style="text-align: right;">Categoria:</td>
		<td><?=isset($nome_cat)?$nome_cat:"";?></td>
	</tr>
	<tr>
		<td style="text-align: right;">
			<a href="<?=SITE_URL;?>/admin/categoria/apagar.php?id=<?=$id;?>&a=sim"><button type="button" name="sim">SIM</button></a>
		</td>
		<td>
			<a href="<?=SITE_URL;?>/admin/categoria/"><button type="button" name="nao">NÃO</button></a>
		</td>
	</tr>
</table>

<?php

include(SITE_ROOT."/layout/footer.php");

?>
