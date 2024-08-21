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
        $n = 4;
		$no = "Rafael";
		$n = 4.5;
		//tipo de variavel no php é feito por coersão. Depende do valor do dado usado
		//alem disso pode definir o tipo de dado usando por exemplo $no = (string) "Rafael";
		echo $no;
    ?>
		<br>
		</br>
	<?php 
		$nome = "Pedro";
		$idade = 30;
		echo "$nome tem $idade anos!<br>";
		echo '$nome tem $idade anos!'; //com aspas simples ele nao le as variaveis
	?>
</div>
</body>
</html>
 