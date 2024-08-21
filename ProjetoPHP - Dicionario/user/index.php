<?php include("../config/config.php"); ?>

<?php include(SITE_ROOT."/user/config/config.php"); ?>

<?php include(SITE_ROOT."/layout/header.php"); ?>

<a href="<?=SITE_URL;?>">Inicio</a>

<h2>Dicionario</h2>

<form>
	<table align="center">
		<td>Palavra</td>
		<td><input type="text" name="kw" value="<?=isset($_GET["kw"])?$_GET["kw"]:"";?>"></td> 
		<td>Disciplina</td>
		<td><input type="text" name="dkw" value="<?=isset($_GET["dkw"])?$_GET["dkw"]:"";?>"></td>
		<td><input type="submit" value="BUSCAR"></td>
	</table>
</form>

<?php
$dbObj = new mysql();
$sql = "";
$sql .= "SELECT * from dados";
if (isset($_GET["kw"]) && $_GET["kw"]!='' && isset($_GET["dkw"]) && $_GET["dkw"]=='') {
	$sql .= " WHERE palavra LIKE '%".$_GET["kw"]."%'";
} else if (isset($_GET["dkw"]) && $_GET["dkw"]!='' && isset($_GET["kw"]) && $_GET["kw"]=='') {
	$sql .= " WHERE disciplina LIKE '%".$_GET["dkw"]."%'";
} else if (isset($_GET["kw"]) && $_GET["kw"]!='' && isset($_GET["dkw"]) && $_GET["dkw"]!='') {
	$sql .= " WHERE palavra LIKE '%".$_GET["kw"]."%' and disciplina LIKE '%".$_GET["dkw"]."%'";
}
$sql .= " ORDER BY palavra; ";
$result = $dbObj->query($sql);
if ($result) {
	if (mysqli_num_rows($result) > 0) {
		?>
		<table border="1px" align="center">
			<tr>
				<th align="center">Disciplina</th>
				<th align="center">Palavra</th>
				<th align="center">Significado</th>
			</tr>
			<?php
			while ($row = mysqli_fetch_assoc($result)) {
				?>
				<tr>
					<td align="center"><?=$row["disciplina"];?></td>
					<td align="center"><?=$row["palavra"];?></td>
					<td align="right" style="text-align: justify;"><?=$row["significado"];?></td>
				</tr>
				<?php
			}
		?>
		</table>
		<?php
	}
}
?>

<?php include(SITE_ROOT."/layout/footer.php"); ?>
