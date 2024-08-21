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
        $num = $_POST["val"];
		$res = sqrt($num);
		echo "A raiz quadrada do $num é ". number_format($res,2);
    ?>
	<br><br>
	<a href="formraiz.html">VOLTAR</a>
</div>
</body>
</html>
 