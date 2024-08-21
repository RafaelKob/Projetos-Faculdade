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
        $a = isset($_GET["ano"])?$_GET["ano"]:1900;
		$i = date("Y") - $a;
		echo "Voce nascem em $a e tera $i anos";
		
		if ($i>=18) {
			$v = "já pode votar";
			$d = "já pode dirigir";
		} else {
			$v = "não pode votar";
			$d = "não pode dirigir";
		}
		echo ", com essa idade voce $v e também $d";
    ?>
	<br><br>
	<a href="idade.html">VOLTAR</a>
</div>
</body>
</html>
 