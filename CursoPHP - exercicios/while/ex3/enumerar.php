<!DOCTYPE html>
<html>
<head>
    <link rel="stylesheet" href="../_css/estilo.css"/>
    <meta charset="UTF-8"/>
    <title>Curso de PHP - CursoemVideo.com</title>
</head>
<body>
<div>
	<form method="get" action="enumerar.php">
		<table>
			<th>
				Enumerando os numeros dados
			</th>
			<tr>
				<td>
					Inicio: <input type="number" name="ini"/>
					Fim: <input type="numer" name="fim"/>
				</td>
			</tr>
			<tr>
				<td>
					<label for="inc">Incremento:</label>
					<select name="inc" id="inc">
						<?php
							$i=1;
							while($i<=5) {
								echo "<option value='$i'>$i</option>";
								$i++;
							}
						?>
					</select>
				</td>
			</tr>
			<tr>
				<td>
					<input type="submit" name="enum" value="Enumerar"/>
				</td>
			</tr>
		</table>
	</form>
	
	<?php
		$ini=isset($_GET["ini"])?$_GET["ini"]:0;
		$fim=isset($_GET["fim"])?$_GET["fim"]:0;
		$i=$_GET["inc"];
		
		if(isset($_GET["enum"])){
			echo "<br>";
			if ($ini<$fim) {
				while($ini<=$fim) {
					echo $ini. "<br>";
					$ini += $i;
				}
			} elseif($ini>$fim) {
				while($ini>=$fim) {
					echo $ini. "<br>";
					$ini -= $i;
				}
			} else {
				echo $ini;
			}
		}
	?>
</div>
</body>
</html>
 