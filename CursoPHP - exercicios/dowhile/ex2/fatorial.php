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
        $n = isset($_GET["val"])?$_GET["val"]:1;
		
		$c = $n;
		$res = 1;
		echo "$n! = ";
		do {
			if($c==1) {
				echo "$c ";
			} else {
				echo "$c x ";
			}
			$c--;
		} while ($c>=1); 
		
		$c = 1;
		do {
			$res = $res * $c;
			$c++;
		} while ($c<=$n);
		echo "= $res";
    ?>
	<br><br>
	<a href="javascript:history.go(-1)">VOLTAR</a>
</div>
</body>
</html>
 