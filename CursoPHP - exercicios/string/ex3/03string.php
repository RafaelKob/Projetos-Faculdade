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
		$t = "Aqui temos um texto gigante criado pelo php e vai mostrar o funcionamento da função wordrap";
		$r = wordwrap($t, 10, "<br/>\n", true); //formatar texto, 10 representa numero de caracteres para pular linha
		echo $r;
	?>
</div>
</body>
</html>
 