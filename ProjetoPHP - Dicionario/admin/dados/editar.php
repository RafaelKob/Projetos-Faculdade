<?php

include("../../config/config.php");
include(SITE_ROOT."/admin/config/config.php");

validaSessao();

$dbObj = new mysql();
$sql = "SELECT * FROM dados WHERE id = '".$_GET["id"]."';";
$result = $dbObj->query($sql);
if ($result) {
	if (mysqli_num_rows($result) == 1) {
		$row = mysqli_fetch_assoc($result);
		extract($row);
	}
}
if (!$id) {
	header("Location: ".SITE_URL."/admin/dados");
	exit;
}

$error = "";
if ($_SERVER["REQUEST_METHOD"] == "POST") {
	extract($_POST);
	if (!$disciplina) $error .= " Disciplina não selecionada! ";
	if (!$palavra) $error .= " Palavra não definida! ";
	if (!$significado) $error .= " Significado não preenchido! ";
	if (!$error) {
		$dbObj = new mysql();
		$sql = "UPDATE dados 
		        SET disciplina = '".$disciplina."',
				palavra = '".$palavra."',
				significado = '".$significado."' WHERE id = ".$id.";";
		$result = $dbObj->query($sql);
		header("Location: ".SITE_URL."/admin/dados");
		exit;
	}
}

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>Editar conteudo</h2>

<?php
if ($error) {
	echo "<span style=\"color: red; font-style: italic;\">";
	echo $error;
	echo "</span>";
}
?>

<form action="<?=SITE_URL;?>/admin/dados/editar.php?id=<?=$id;?>" method="POST">
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
					<?php
						$dbObj = new mysql();
    					$sql = "SELECT disciplina FROM dados;";
    					$result = $dbObj->query($sql);
    					if ($result && mysqli_num_rows($result) > 0) {
            					echo "<option value='".$row['disciplina']."' ";
								if ($disciplina == $row['disciplina']) {
									echo "selected hidden";
								}
								echo ">".$row['disciplina']."</option>";
        				}
					?>
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
				<input type="submit" name="submit" value="Salvar">
			</td>
		</tr>
	</table>
</form>


<?php

include(SITE_ROOT."/layout/footer.php");

?>
