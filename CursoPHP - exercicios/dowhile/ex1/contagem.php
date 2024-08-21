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
        $n = isset($_GET["num"])?$_GET["num"]:0;
		
		$c = 1;
		do {
			echo $c. "<br>";
			$c+=2;
		} while ($c<=$n); 
		//mesmo se eu por igual a 0 em campo vazio, 
		//ele mostrara o numero 1 pois no do while ele faz no minimo uma vez o processo
		
		$c = $n;
		do {
			echo "$c ";
			$c--;
		} while ($c>=1);
		
		/*$c=1;
		while ($c<=$n) {
			echo "teste";
			echo $c. "<br>";
			$c++;
		}*/
    ?>
	<br><br>
	<a href="javascript:history.go(-1)">VOLTAR</a>
</div>
</body>
</html>
 