<?php

include("../../config/config.php");
include(SITE_ROOT."/admin/config/config.php");

validaSessao();

$error = "";
if ($_SERVER["REQUEST_METHOD"] == "POST") {
	extract($_POST);
	if (!$categoria) $error .= " Sem categoria definida! ";
	if (!$error) {
		$dbObj = new mysql();
		$sql = "INSERT INTO categoria (nome_cat) VALUES ('".$categoria."');";
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
<form action="<?=SITE_URL;?>/admin/categoria/categoria.php" method="POST">
	<table align="center">
		<tr>
			<td style="text-align: right;">Categoria:</td>
			<td>
				<input type="text" name="categoria" value="<?=isset($categoria)?$categoria:"";?>">
			</td>
		</tr>
		<tr>
			<td colspan="2" style="text-align: center;">
				<input type="submit" name="submit" value="Adicionar">
			</td>
		</tr>
	</table>

</form>


<?php

include(SITE_ROOT."/layout/footer.php");

?>
