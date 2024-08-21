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
		function soma () {
			$p=func_get_args();
			$t=func_num_args();
			$s = 0;
			For ($i=0;$i<$t; $i++) {
				$s+=$p[$i];
			}
			return $s; //return $a +$b
		}


			$res = soma (3,5,2, 8);
			echo "A soma de todos os numeros é $res";
		
	?>
</div>
</body>
</html>
 