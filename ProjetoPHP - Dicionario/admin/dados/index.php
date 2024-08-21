<?php

include("../../config/config.php");
include(SITE_ROOT."/admin/config/config.php");

validaSessao();

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>Repositório do dicionário</h2>

<hr>
<a href="<?=SITE_URL;?>/admin/dados/dados.php" style="color: white;">+ adicionar</a>
<hr>

<?php
$dbObj = new mysql();
$sql = "SELECT * FROM dados ORDER BY palavra;";
$result = $dbObj->query($sql);
if ($result) {
	if (mysqli_num_rows($result) > 0) {
		?>
		<table border="1px" width="100%">
			<tr>
				<th>Disciplina</th>
				<th>Palavra</th>
				<th>Significado</th>
				<th>EDITAR</th>
				<th>APAGAR</th>
			</tr>
			<?php
			while ($row = mysqli_fetch_assoc($result)) {
				?>
				<tr>
					<td><?=$row["disciplina"];?></td>
					<td><?=$row["palavra"];?></td>
					<td><?=$row["significado"];?></td>
					<td><a href="<?=SITE_URL;?>/admin/dados/editar.php?id=<?=$row["id"];?>" style="color: white;">*** editar ***</a></td>
					<td><a href="<?=SITE_URL;?>/admin/dados/apagar.php?id=<?=$row["id"];?>" style="color: white;">- apagar</a></td>
				</tr>
				<?php
			}
		?>
		</table>
		<?php
	}
}
?>

<?php

include(SITE_ROOT."/layout/footer.php");

?>
