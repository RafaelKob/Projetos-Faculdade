<?php

include("../../config/config.php");
include(SITE_ROOT."/admin/config/config.php");

validaSessao();

$error = "";
if ($_SERVER["REQUEST_METHOD"] == "POST") {
	extract($_POST);
	if (!$nome) $error .= " Nome Vazio! ";
	if (!$preco) $error .= " Preço Vazio! ";
	if (!$id_categoria) $error .= " Categoria Vazio! ";
	if (!$error) {
		$dbObj = new mysql();
		$sql = "INSERT INTO produto (nome, preco, id_categoria, id_conta) VALUES ('".$nome."', '".$preco."', '".$id_categoria."', '".$_SESSION["CONTA_ID"]."')";
		$result = $dbObj->query($sql);
		header("Location: ".SITE_URL."/admin/produtos");
		exit;
	}
}

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>PRODUTO</h2>

<?php
if ($error) {
	echo "<span style=\"color: red; font-style: italic;\">";
	echo $error;
	echo "</span>";
}
?>


<form action="<?=SITE_URL;?>/admin/produtos/produto.php" method="POST">
	<table align="center">
		<tr>
			<td style="text-align: right;">Nome:</td>
			<td>
				<input type="text" name="nome" value="<?=isset($nome)?$nome:"";?>">
			</td>
		</tr>
		<tr>
			<td style="text-align: right;">Preço:</td>
			<td>
				<input type="text" name="preco" value="<?=isset($preco)?$preco:"";?>">
			</td>
		</tr>
		<tr>
			<td>
				<label for="id_categoria">Categoria</label>
			</td>
			<td>
				<select name = "id_categoria" id="id_categoria" style="text-align: left;">
					<option value=""> -- Selecione uma categoria --</option>
					<?php
    					$dbObj = new mysql();
    					$sql = "SELECT * FROM categoria;";
    					$result = $dbObj->query($sql);
    					if ($result && mysqli_num_rows($result) > 0) {
        					while ($row = mysqli_fetch_assoc($result)) {
            					echo "<option value='".$row['id']."' ";
								
								echo ">".$row['nome_cat']."</option>";
        					}
    					}
    				?>
				</select>
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
