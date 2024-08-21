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
		$op = isset($_GET["op"])?$_GET["op"]:1;
		
		switch ($op) {
			case 1:
				$sit="dobro";
				$res=2*$n;
				break;
			case 2:
				$sit="cubo";
				$res=$n ** 3;
				break;
			case 3:
				$sit="raiz quadrada";
				$res=sqrt($n);
				break;
			default:
				$sit="operação invalida";
				$res="Null";
		}
		
		echo "O numero escolhido foi $n e a operação selecionada foi $sit. O resultado dessa operação é ". number_format($res,2);
    ?>
	<br><br>
	<a href="operacaoswi.html">VOLTAR</a>
</div>
</body>
</html>
 