<!DOCTYPE html>
<html>
<head>
    <link rel="stylesheet" href="../_css/estilo.css"/>
    <meta charset="UTF-8"/>
    <title>Curso de PHP - CursoemVideo.com</title>
</head>
<body>
<div>
	<form method="get" action="taboada.php">
		<table>
			<th>
				Taboada de um número
			</th>
			<tr>
				<td>
					<label for="num">Número:</label>
					<select name="num" id="num">
						<?php
							$i=1;
							while($i<=10) {
								echo "<option value='$i'>$i</option>";
								$i++;
							}
						?>
					</select>
				</td>
			</tr>
			<tr>
				<td>
					<input type="submit" name="enum" value="Taboada"/>
				</td>
			</tr>
		</table>
	</form>
	
	
	<?php
		$num=isset($_GET["num"])?$_GET["num"]:0;
		
		$c=1;
		do {
			$res = $num * $c;
			echo "$num x $c = $res <br>";
			$c++;
		} while ($c<=10);
	?>
	
</div>
</body>
</html>
 