<!DOCTYPE html>
<html>
<head>
    <link rel="stylesheet" href="../_css/estilo.css"/>
    <meta charset="UTF-8"/>
    <title>Curso de PHP - CursoemVideo.com</title>
</head>
<body>
<div>
	<form method="get" action="caixadinamica.php">
		<table>
			<th>
				Criando caixas de textos dinamicamente
			</th>
			<tr>
				<td>
					<?php
						$c=1;
						while($c<=5){
							echo "Valor $c: <input type='number' name='v$c' min='0' max='100' value='0'/><br/>";
							$c++;
						} //dentro de um eco tem que usar aspas simples
					?>
				</td>
			</tr>
			<tr>
				<td>
					<input type="submit" name="enviar" value="Enviar"/>
				</td>
			</tr>
		</table>
	</form>
	
	<?php
	if(isset($_GET["enviar"])) {
		$i = 1;
		while ($i<=5){
			$v="num".$i;
			$$v = isset($_GET["v$i"])?$_GET["v$i"]:"";
			$i++;
		}
		
		$i=1;
		while ($i<=5) {
			$v = "num".$i;
			echo "Valor $i: " . $$v . "<br/>";
			$i++;
		}
		//echo "$num1 $num2 $num3 $num4 $num5"; imprime manualmente os valores
	}	
		
	?>
</div>
</body>
</html>
 