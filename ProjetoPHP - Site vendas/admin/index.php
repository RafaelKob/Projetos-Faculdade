<?php
include("../config/config.php");
include(SITE_ROOT."/admin/config/config.php");

validaSessao();

include(SITE_ROOT."/layout/header.php");

include(SITE_ROOT."/admin/menu.php");

?>

<h2>ADMINISTRADOR</h2>

<?php

include(SITE_ROOT."/layout/footer.php");

?>
