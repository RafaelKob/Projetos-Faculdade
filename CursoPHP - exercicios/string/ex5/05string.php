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
		$nome = "Gustavo Guanabara";
        $nome2 = strtolower($nome); //passa as letras para minusculo
        echo "Seu nome é ". $nome2;
        echo "<br><br>";

        $nome = "Gustavo Guanabara";
        $nome2 = strtoupper($nome); //passa as letras para maiuscula
        echo "Seu nome é ". $nome2;
        echo "<br><br>";

        $nome = "gustavo guanAbara";
        print("Seu nome é ". ucfirst($nome)); //coloca a primeira letra em maiuscula, e as outras continuam
        echo "<br><br>";

        $nome = "gustavo guanAbara";
        print("Seu nome é ". ucwords($nome)); //coloca a primeira letra em maiuscula de cada palavra, e as outras continuam
        echo "<br><br>";

        $nome = "gustavo guanabara";
        print("Seu nome ao contrario é ". strrev($nome)); //coloca a primeira letra em maiuscula de cada palavra, e as outras continuam
        echo "<br><br>";

        $frase = "Estou aprendendo PHP";
        $pos = strpos($frase, "PHP"); //essa função é case sensitive, se por php nao achará
        echo "A frase é $frase <br>A string PHP foi encontrada na posição $pos";
        echo "<br><br>";

        $frase = "Estou aprendendo PHP";
        $pos = stripos($frase, "php"); //ignora se é maiusculo ou minisculo
        echo "A frase é $frase <br>A string PHP foi encontrada na posição $pos";
        echo "<br><br>";
    
        $frase = "Estou aprendendo PHP no curso em video de PHP";
        $cont = substr_count($frase, "PHP");
        print("PHP encontrado $cont vezes");
        echo "<br><br>";

        $site = "Curso em Video";
        $sub = substr($site, 0, 5); //substring começando em 0 ate a 5 string
        echo "$sub";
        echo "<br><br>";

        $nome = "Guanabara";
        $novo = str_pad($nome, 30, "+", STR_PAD_RIGHT);
        print ("Meu professor $novo é legal");
        echo "<br><br>";

        $txt = str_repeat("PHP", 5);
        print ("O texto gerado foi $txt<br>");
        print (str_repeat("-",20));
        echo "<br><br>";

        $frase = "Gosto de estudar Matematica";
        $novafrase = str_replace("Matematica", "PHP", $frase); //ele tem case sensitive se colocar str_ireplace não leva isso em consideração
        echo "$novafrase";
    ?>
</div>
</body>
</html>
 