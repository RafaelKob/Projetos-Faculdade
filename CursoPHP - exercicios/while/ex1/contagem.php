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
        $n = isset($_GET["num"])?$_GET["num"]:1;
		
		$c = 1;
		while ($c <= $n) {
			echo "$c<br>";
			$c++;
		}
		
		while ($n >= 1) {
			echo "<br>". $n;
			$n--;
		}		
		
    ?>
	<br><br>
	<a href="javascript:history.go(-1)">VOLTAR</a>
</div>
</body>
</html>
 