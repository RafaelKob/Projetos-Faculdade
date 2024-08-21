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
		$n=isset($_GET["num"])?$_GET["num"]:1;
		
		$contador=0;
		
		for ($i=1; $i<=$n; $i++) {
			if ($n%$i==0) {
				$contador++;
			}
		}
		
		echo "Analisando o numero 5 ... <br>";
		
		echo "Valores multiplos: ";
		for ($i=1; $i<=$n; $i++) {
			if ($n%$i==0) {
				echo "$i ";
			}
		}
		
		echo "<br>Total de multiplos: $contador <br>";
		
		if ($contador>2) {
			echo "Resultado: $n não é primo";
		} else {
			echo "Resultado: $n é primo";
		}
	?>
	
	<br><br>
	<a href="javascript:history.go(-1)">Voltar</a>
</div>
</body>
</html>
 