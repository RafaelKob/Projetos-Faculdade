<!DOCTYPE html>
<html>
<head>
    <link rel="stylesheet" href="../_css/estilo.css"/>
    <meta charset="UTF-8"/>
    <title>Curso de PHP - CursoemVideo.com</title>
</head>
<body>
<div>
	<pre>
		<?php
			$n = array(3 =>5,
					   1=>9,
					   0=>8,
					   7=>7);
			unset($n[0]);
			print_r($n);

			echo "\n";
			$dados = array ("nome" => "Rafael",
							 "idade" => 29,
							 "peso" => 55.5);
			foreach ($dados as $k => $valor) {
				echo "O campo $k possui o conteudo $valor \n";
			}
		?>
	</pre>	
</div>
</body>
</html>
 