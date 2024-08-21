<?php

include("../../config/config.php");
include(SITE_ROOT."/admin/config/config.php");

validaSessao();

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>CATEGORIAS</h2>

<hr>
<a href="<?=SITE_URL;?>/admin/categoria/categoria.php" style="color: white;">+ adicionar</a>
<hr>

<?php
$dbObj = new mysql();
$sql = "SELECT * FROM categoria ORDER BY nome_cat;";
$result = $dbObj->query($sql);
if ($result) {
	if (mysqli_num_rows($result) > 0) {
		?>
		<table border="1px" width="100%">
			<tr>
				<th>Categoria</th>
				<th>EDITAR</th>
				<th>APAGAR</th>
			</tr>
			<?php
			while ($row = mysqli_fetch_assoc($result)) {
				?>
				<tr>
					<td><?=$row["nome_cat"];?></td>
					<td><a href="<?=SITE_URL;?>/admin/categoria/editar.php?id=<?=$row["id"];?>" style="color: white;">*** editar ***</a></td>
					<td><a href="<?=SITE_URL;?>/admin/categoria/apagar.php?id=<?=$row["id"];?>" style="color: white;">- apagar</a></td>
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
