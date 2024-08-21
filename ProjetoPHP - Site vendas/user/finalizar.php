<?php include("../config/config.php"); ?>

<?php include(SITE_ROOT."/user/config/config.php"); ?>

<?php include(SITE_ROOT."/layout/header.php"); ?>


<?php
$total = $_GET['total'];
echo "<br><h3>Compra finalizada com sucesso!</h3>";
echo "Valor total da compra é igual a <b>RS $total</b> <br><br><br>";
?>

<a href="<?=SITE_URL;?>/user/"><input align="center" type="button" value="Retornar a lista de produtos"></a>

<?php include(SITE_ROOT."/layout/footer.php"); ?>
