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
        $n1 = isset($_GET["n1"])?$_GET["n1"]:0;
		$n2 = isset($_GET["n2"])?$_GET["n2"]:0;
		$media = ($n1+$n2)/2;
		
		echo "O aluno tem as notas: $n1 e $n2. E sua media será $media. <br>";
		
		if ($media<5.0) {
			$sit = "reprovado";
		} elseif ($media>=5 && $media<7){
			$sit = "em recuperaçao";
		} else {
			$sit = "aprovado";
		}
		echo "E com essa media o aluno está $sit";
    ?>
	<br><br>
	<a href="media.html">VOLTAR</a>
</div>
</body>
</html>
 