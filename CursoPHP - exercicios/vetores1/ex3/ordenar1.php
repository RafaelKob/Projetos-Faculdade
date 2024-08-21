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
				$n = array(2=>"A",5=>"J",0=>"M",3=>"X",4=>"K");
				print_r($n);

				//sort($n); //coloca os valores em ordem crescente
				//print_r($n);

				//rsort($n); //coloca os valores em ordem decrescente
				//print_r($n);

				//asort($n); //coloca os valores em ordem crescente mas nao muda os indices
				//print_r($n);

				//arsort($n); //coloca os valores em ordem decrescente maas nao muda os indices
				//print_r($n);

				//ksort($n); //coloca em ordem crescente apenas os indices do vetor
				//print_r($n);

				krsort($n); //coloca em ordem decrescente apenas os indices do vetor
				print_r($n);
			?>
		</pre>
	</div>
</body>
</html>
 