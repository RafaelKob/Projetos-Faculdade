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
        $n1 = 3;
		$n2 = 2;
		/*$s = $n1 + $n2;
		echo "A soma entre $n1 e $n2 é igual a $s";*/
		
		//sem criação de uma variavel resultado
		echo "A soma vale ". ($n1+$n2);
		echo "<br>A subtração vale ". ($n1-$n2);
		echo "<br>A multiplicação vale ". ($n1*$n2);
		echo "<br>A divisão vale ". ($n1/$n2);
		echo "<br>O modulo vale ". ($n1%$n2);
		$m = ($n1 + $n2) / 2;
		echo "<br>A média vale $m";
		
		echo "<br></br>";		
		//como fazer a atribuição de valores personalizados pela url
		//http://localhost/aulaPHP/operadores/operador.php?a=5&b=8
		$n1 = $_GET["a"];
		$n2 = $_GET["b"];
		echo "<h2> Valores recebidos: $n1 e $n2</h2>";
		echo "A soma vale ". ($n1+$n2);
		echo "<br>A subtração vale ". ($n1-$n2);
		echo "<br>A multiplicação vale ". ($n1*$n2);
		echo "<br>A divisão vale ". ($n1/$n2);
		echo "<br>O modulo vale ". ($n1%$n2);
		$m = ($n1 + $n2) / 2;
		echo "<br>A média vale $m";
	?>
	
	<?php
		$v = $_GET["x"];
		$w = $_GET["y"];
		echo "<h2> Valores recebidos: $v e $w</h2>";
		echo "<br>O valor absoluto de $v é ". abs($v);
		echo "<br>O valor de $v<sup>$w</sup>";
		echo "<br>A raiz de $v é ". sqrt($v);
		echo "<br>O arrendondamento de $v é ". round($v);
	?>
</div>
</body>
</html>
 