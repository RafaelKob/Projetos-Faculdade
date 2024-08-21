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
		//include "funcoes2.php"; //include mesmo que nao exista ele tenta achar o arquivo e continua rodando

		require "funcoes2.php"; //se ele nao achar o arquivo, ele para de funcionar

		echo "<h1>Testando novas funçoes</h1>";

		ola();

		mostraValor(4);

		echo "<h2>Finalizando o programa...</h2>";
	?>
</div>
</body>
</html>
 