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
        $preco = $_GET["p"]; //http://localhost/aulaphp/atribuicao/atribuicao.php?p=100
		echo "O preço do produto é R$ $preco";
		
		//representação de atribuição de uma mesma variavel nos dois lados sem "abreviação"
		$preco = $preco + ($preco*10/100);
		echo "<br>O preço do produto com 10% de aumento será R$ $preco";
		
		//representação de atribuição com a mesma variavel nos dois lados com abreviação
		$preco += ($preco*10/100);
		echo "<br>O preço do produto com 10% de aumento será R$ ". number_format($preco,2);
		
		/*Esse exercicio pretende demonstrar 
		o uso de operadores
		de incremento e decremento*/
		$atual = $_GET["pp"];
		//echo "<br></br>O ano atual é $atual e o ano anterior é ". $atual--; //a-- pos decremento - utiliza a variavel e depois decrementa
		echo "<br></br>O ano atual é $atual e o ano anterior é ". --$atual; //--a pre decremento - faz o decremento e depois utiliza a variavel
		
		//Sem utilização de referencias
		$a = 3;
		$b = $a;
		$b += 5;
		echo "<br><br>A variavel A vale $a";
		echo "<br>A variavel B vale $b";
		
		//Com utilização de referencias
		$a = 3;
		$b = &$a;
		$b += 5;
		echo "<br><br>A variavel A vale $a";
		echo "<br>A variavel B vale $b";
		
		//Uso de variavel de variaveis
		$x = "abc";
		$$x = "def";
		echo "<br><br>O conteudo da variavel x é $x";
		echo "<br>A variavel ABC criada recebeu o valor $abc";
    ?>
	
	<a href="history.go(-1).html">Voltar</a>
</div>
</body>
</html>
 