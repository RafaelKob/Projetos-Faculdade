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
		$p = "Leite";
		$pr = 4.5;
		echo "o $p custa R$ $pr<br>"; //echo sem formatar
		echo "o $p custa R$ ". number_format($pr,2)."<br>"; //echo com formatação

		printf ("O %s custa R$ %.2f", $p, $pr); //pintf da pra formatar mais facil
	?>
</div>
</body>
</html>
 