<?php

	//Star Patterns (19-9-19)
	for($i = 1; $i <= 3; $i++){
		for($j = 1; $j <= $i; $j++){
			echo "*";
		}
		echo "<BR>";
	}

	//perform separate experiments

	echo "<BR>";
	for($i = 3; $i >= 1; $i--){
		for($j = 1; $j <= $i; $j++){
			echo "*";
		}
		echo "<BR>";
	}

?>