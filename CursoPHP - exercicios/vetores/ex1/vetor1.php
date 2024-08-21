<!DOCTYPE html>
<html>
<head>
    <link rel="stylesheet" href="../_css/estilo.css"/>
    <meta charset="UTF-8"/>
    <title>Curso de PHP - CursoemVideo.com</title>
</head>
<body>
	<div>
		<pre>
			<table border="1">
				<tr>
					<?php
						$c = range(5,20,2);
						foreach($c as $valor) {
							echo "<td>$valor ";
						}

						echo "\n\n";
					?>
			</table>
			
			<?php
				$n = array(3,5,8,2);
				$n[]=7;
				print_r($n);
			?>
		</pre>
	</div>
</body>
</html>
 