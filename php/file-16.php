<?php

	//Sum of Digits (3-10-19)
	$num = 7596;
	$sum = 0;
	while ($num > 1){
		$rem = $num%10;
		$sum = $sum + $rem;
		$num = $num/10;
	}
	echo "The sum of 7596 is $sum.";
	
?>