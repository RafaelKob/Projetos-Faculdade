<?php

include("../../config/config.php");
include(SITE_ROOT."/admin/config/config.php");

validaSessao();

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>PRODUTOS</h2>

<hr>
<a href="<?=SITE_URL;?>/admin/produtos/produto.php" style="color: white;">+ adicionar</a>
<hr>

<?php
$dbObj = new mysql();
$sql = "SELECT produto.id as id_produto,
			   produto.nome as nome,
			   produto.preco as preco,
			   produto.id_categoria as id_categoria_fk,
			   produto.id_conta as id_conta_fk,
			   categoria.id as id_categoria,
			   categoria.nome_cat as nome_categoria,
			   conta.id as id_conta,
			   conta.usuario as usuario
		FROM produto inner join categoria on produto.id_categoria = categoria.id
					 inner join conta on produto.id_conta = conta.id
		where id_conta = {$_SESSION["CONTA_ID"]}
		ORDER BY nome";
$result = $dbObj->query($sql);
if ($result) {
	if (mysqli_num_rows($result) > 0) {
		?>
		<table border="1px" width="100%">
			<tr>
				<th>Nome</th>
				<th>Preço</th>
				<th>Categoria</th>
				<th>Administrador</th>
				<th>EDITAR</th>
				<th>APAGAR</th>
			</tr>
			<?php
			while ($row = mysqli_fetch_assoc($result)) {
				?>
				<tr>
					<td><?=$row["nome"];?></td>
					<td><?=$row["preco"];?></td>
					<td><?=$row["nome_categoria"];?></td>
					<td><?=$row["usuario"];?></td>
					<td><a href="<?=SITE_URL;?>/admin/produtos/editar.php?id=<?=$row["id_produto"];?>" style="color: white;">*** editar ***</a></td>
					<td><a href="<?=SITE_URL;?>/admin/produtos/apagar.php?id=<?=$row["id_produto"];?>" style="color: white;">- apagar</a></td>
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
