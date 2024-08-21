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
		$nome="   Jose da Silva   ";
		echo(strlen($nome));
		echo"<br>";
		$novo = trim($nome); // retira os espaços adicionais antes e no final do texto
		echo($novo);
		echo"<br>";
		echo(strlen($novo));

		$novo = ltrim($nome); // retira os espaços adicionais antes do texto
		echo($novo);
		echo"<br>";
		echo(strlen($novo));

		$novo = ltrim($nome); // retira os espaços adicionais depois do texto
		echo($novo);
		echo"<br>";
		echo(strlen($novo));
		echo"<br><br>";

		$frase = "Eu vou estudar PHP";
		$cont = str_word_count($frase,0); //0 conta as palavras, 1 faz os vetores, 2 cria vetor mantendo as posiçoes dentro da string
		echo $cont;
		echo"<br>";
		$frase = "Eu vou estudar PHP";
		$cont = str_word_count($frase,1); 
		print_r($cont);
		echo"<br>";
		$frase = "Eu vou estudar PHP";
		$cont = str_word_count($frase,2); 
		print_r($cont);

		echo"<br><br>";
		$site = "Curso em Video";
		$vetor = explode(" ", $site); //cria um vetor separando pelos espaços ou outro simbolo colocado entre as aspas
		print_r($vetor);

		echo"<br><br>";
		$nome = "Maria";
		$vetor = str_split($nome); //cria um vetor separando as letras
		print_r($vetor);

		echo"<br><br>";
		$vetor[0] = "Curso"; 
		$vetor[1]= "em";
		$vetor[2] = "Video";
		$texto = implode("#", $vetor); //ele junta os vetores em uma string e dentro das aspas adicionasse a "ligação" -- pode-se usar join tbm
		print($texto);

		echo"<br><br>";
		$letra = chr(67);
		echo "A letra de codigo 67 é $letra";

		echo"<br><br>";
		$letra = "C";
		$cod = ord($letra); //da o codigo da letra
		print("A letra $letra tem codigo $cod");
	?>
</div>
</body>
</html>
 