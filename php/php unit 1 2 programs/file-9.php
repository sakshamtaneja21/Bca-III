<?php

	//Reverse a Number (19-9-19)
	$num = 753192;
	$revnum = 0;
	while ($num > 1){
		$rem = $num % 10;
		$revnum = ($revnum * 10) + $rem;
		$num = ($num / 10);
	}
	echo "Reverse of 753192 is $revnum";

?>