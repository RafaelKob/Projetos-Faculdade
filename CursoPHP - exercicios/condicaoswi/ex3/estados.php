<!DOCTYPE html>
<html>
<head>
  <link rel="stylesheet" href="../_css/estilo.css"/>
  <meta charset="UTF-8"/>
  <title>Curso de PHP - CursoemVideo.com</title>
</head>
<body>
<div>
    <?php
        $estado = isset($_GET["estado"])?$_GET["estado"]:0;
		
		switch ($estado) {
			case 'ac': case 'al': case 'ap':
				$regiao = "norte";
				break;
			default:
				$regiao = "não especificada";
		}
		
		echo "Voce mora na <span class='foco'>$regiao</span>";
    ?>
	<br><br>
	<a href="javascript:history.go(-1)">VOLTAR</a>
</div>
</body>
</html>
 