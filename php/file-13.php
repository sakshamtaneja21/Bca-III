<?php

	//Factorial of a Number (19-9-19)
	$num = 6;	$facto = 1;
	for ($x = $num; $x >= 1; $x--){
		$facto = $facto * $x;
	}
	echo "Factorial of $num is $facto";

?>