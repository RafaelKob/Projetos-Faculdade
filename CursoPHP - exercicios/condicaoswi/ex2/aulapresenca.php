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
        $dia = isset($_GET["ds"])?$_GET["ds"]:0;
		
		switch ($dia) {
			case 1: case 2: case 3: case 4: case 5:
				echo "Precisa ir pra aula";
				break;
			case 6: case 7:
				echo "Não precisa ir na aula";
				break;
			default:
				echo "Não é um dia da semana valido";
		}
    ?>
	<br><br>
	<a href="javascript:history.go(-1)">VOLTAR</a>
</div>
</body>
</html>
 