<?php

	//Character Pattens (19-9-19)
	$num = 65; 
	for ($i = 0; $i < 5; $i++){
		for ($j = 0; $j <= $i; $j++ ){ 
			$ch = chr($num);
			echo $ch; 
		}
		$num = $num + 1;
		echo "<BR>";
	}
	echo "<BR>";

	//perform separate experiments

	$x = range('A', 'Z');  
	for($i = 0; $i < 5; $i++){   
		for($j = 0; $j <= $i; $j++){  
			echo $x[$j];
		}
	echo "<BR>";
	}

?>