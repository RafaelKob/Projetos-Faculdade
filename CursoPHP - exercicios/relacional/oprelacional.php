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
        //operador unário - expressão ? verdadeiro : falso
		//$maior = $a>$b ? $a : $b
		
		/*Permitir que o usuario faça a soma ou a multiplicação
		de acordo com o parametro que passar*/
		$n1 = $_GET["a"];
		$n2 = $_GET["b"];
		$tipo = $_GET["op"];
		echo "Os valores passados foram $n1 e $n2 <br/>";
	
		$r = ($tipo = "s") ? $n1+$n2 : $n1*$n2;
		echo "O resultado sera $r<br><br>";
		
		//Utilizar o operador == ou ===
		$x = 3;
		$y = "3";
		$r = ($x==$y) ? "sim":"não"; //verifica se o conteudo são iguais
		echo "As variaveis A e B são iguais: $r<br>";
		
		$r = ($x===$y) ? "sim":"não"; //verifica se eles são identicos (conteudo e tipo)
		echo "As variaveis A e B são identicos: $r<br><br>";
		
		$nota1 = $_GET["n1"];
		$nota2 = $_GET["n2"];
		$m = ($nota1 + $nota2)/2;
		echo "A media entre $nota1 e $nota2 é $m<br>";
		echo "A situação do aluno é ". (($m<6)?"Reprovado":"Aprovado");
		
		//operadores logicos
		$ano = 2012;
		$idade = 2024 - $ano;
		echo "<br><br>A idade é $idade";
		$tipo = ($idade>=18 && $idade<=65)?"Obrigatorio":"Não Obrigatorio";
		echo " e por isso seu voto é $tipo";
		
		//link com utilização dos gets
		//http://localhost/aulaphp/relacional/oprelacional.php?a=5&b=3&op=s&n1=5&n2=8
    ?>
</div>
</body>
</html>
 