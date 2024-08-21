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
		$v[0] = 4;
		$v[1] = 8;
		$v[2] = 3;
		print_r($v); //mostra o tipo da variavel, serve para periodo de teste
		echo "<br><br>";
		$v2 = array(3,7,6,2,1,9);
		print_r($v2);
		echo "<br><br>";
		var_dump($v2); //apresenta o tipo da variavel com mais detalhes
		echo "<br><br>";
		var_export($v2); //bem parecido com o print_r com menos detalhes
	?>
</div>
</body>
</html>
 