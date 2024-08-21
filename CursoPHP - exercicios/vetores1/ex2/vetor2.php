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
				$n = array("A","J","M","X","K");
				print_r($n);

				//$n[] = "O"; //adiciona depois do ultimo elemento
				//array_push($n, "O"); //comando voltado para pilha onde coloca elemento no final do vetor
				array_pop($n); //comando voltado para estrutura de dados para retirar o ultimo elemento
				print_r($n);
				
				//array_unshift($n,"O"); //coloca o elemento na primeira posição e desloca o indice dos demais elementos para frente
				array_shift($n); //tira o primeiro elemento do vetor e desloca o indice do resto dos elementos
				print_r($n);
			?>
		</pre>
	</div>
</body>
</html>
 