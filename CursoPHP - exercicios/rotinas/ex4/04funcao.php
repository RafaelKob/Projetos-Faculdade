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
		//Passagem por valor
		/*function teste ($x){
			$x += 2;
			echo "O valor de X é $x";
		}

		$a = 3;
		teste ($a);
		echo "<p>O valor de A é $a</p>"*/

		//Passagem por referencia
		function teste (&$x){
			$x += 2;
			echo "O valor de X é $x";
		}

		$a = 3;
		teste ($a);
		echo "<p>O valor de A é $a</p>"
	?>
	
</div>
</body>
</html>
 