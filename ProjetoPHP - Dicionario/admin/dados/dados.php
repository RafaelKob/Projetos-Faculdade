<?php

include("../../config/config.php");
include(SITE_ROOT."/admin/config/config.php");

validaSessao();

$error = "";
if ($_SERVER["REQUEST_METHOD"] == "POST") {
	extract($_POST);
	if (!$disciplina) $error .= " Disciplina não selecionada! ";
	if (!$palavra) $error .= " Palavra não definida! ";
	if (!$significado) $error .= " Significado não preenchido! ";
	if (!$error) {
		$dbObj = new mysql();
		$sql = "INSERT INTO dados (disciplina, palavra, significado) VALUES ('".$disciplina."', '".$palavra."', '".$significado."');";
		$result = $dbObj->query($sql);
		header("Location: ".SITE_URL."/admin/dados");
		exit;
	}
}

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>Adicionar palavras</h2>

<?php
if ($error) {
	echo "<span style=\"color: red; font-style: italic;\">";
	echo $error;
	echo "</span>";
}
?>
<form action="<?=SITE_URL;?>/admin/dados/dados.php" method="POST">
	<table align="center">
		<tr>
			<td>
				<label for="disciplina">Disciplina: </label>
			</td>
			<td>
				<select name = "disciplina" id="disciplina" style="text-align: left;">
					<option value="" selected hidden> -- Selecione uma categoria --</option>
					<option value="estatistica">Estatística</option>
					<option value="estrutura de dados">Estrutura de dados</option>
					<option value="fundamentos de redes de computadores">Fundamentos de redes de computadores</option>
				</select>
			</td>
		</tr>
		<tr>
			<td style="text-align: right;">Palavra:</td>
			<td>
				<input type="text" name="palavra" value="<?=isset($palavra)?$palavra:"";?>">
			</td>
		</tr>
		<tr>
			<td style="text-align: right;">Significado:</td>
			<td>
				<input type="text" name="significado" value="<?=isset($significado)?$significado:"";?>">
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
