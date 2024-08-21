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
        $a = isset($_POST["ano"])?$_POST["ano"]:1900;
		$i = date("Y") - $a;
		echo "Voce nascem em $a e tera $i anos. <br>";
		
		if ($i<16) {
			$tipoVoto = "não vota";
		} elseif (($i>=16 && $i<18) || $i>60){
			$tipoVoto = "voto opcional";
		} else {
			$tipoVoto = "voto obrigatório";
		}
		echo "Para essa idade, $tipoVoto";
    ?>
	<br><br>
	<a href="votacao.html">VOLTAR</a>
</div>
</body>
</html>
 