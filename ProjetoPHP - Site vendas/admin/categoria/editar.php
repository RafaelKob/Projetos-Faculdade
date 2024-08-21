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

$error = "";
if ($_SERVER["REQUEST_METHOD"] == "POST") {
	extract($_POST);
	if (!$categoria) $error .= " Categoria vazia! ";
	if (!$error) {
		$dbObj = new mysql();
		$sql = "UPDATE categoria SET nome_cat = '".$categoria."' WHERE id = ".$id.";";
		$result = $dbObj->query($sql);
		header("Location: ".SITE_URL."/admin/categoria");
		exit;
	}
}

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>CATEGORIA</h2>

<?php
if ($error) {
	echo "<span style=\"color: red; font-style: italic;\">";
	echo $error;
	echo "</span>";
}
?>

<form action="<?=SITE_URL;?>/admin/categoria/editar.php?id=<?=$id;?>" method="POST">
	<table align="center">
		<tr>
			<td style="text-align: right;">Categoria:</td>
			<td>
				<input type="text" name="categoria" value="<?=isset($nome_cat)?$nome_cat:"";?>">
			</td>
		</tr>
		<tr>
			<td colspan="2" style="text-align: center;">
				<input type="submit" name="submit" value="Salvar">
			</td>
		</tr>
	</table>
</form>


<?php

include(SITE_ROOT."/layout/footer.php");

?>
