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

if (isset($_GET["a"]) && $_GET["a"] == "sim") {
	$dbObj = new mysql();
	$sql = "DELETE FROM dados WHERE id = '".$id."';";
	$result = $dbObj->query($sql);
	header("Location: ".SITE_URL."/admin/dados");
	exit;
}

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>APAGAR PALAVRA</h2>


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
            			echo "<option value='".$row['disciplina']."' selected hidden";
						if ($disciplina == $row['disciplina']) {
							echo "selected";
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
		<td style="text-align: right;">
			<a href="<?=SITE_URL;?>/admin/dados/apagar.php?id=<?=$id;?>&a=sim"><button type="button" name="sim">SIM</button></a>
		</td>
		<td>
			<a href="<?=SITE_URL;?>/admin/dados/"><button type="button" name="nao">NÃO</button></a>
		</td>
	</tr>
</table>

<?php

include(SITE_ROOT."/layout/footer.php");

?>
