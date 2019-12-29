<?php

	//Palindrome or Not (19-9-19)
	$num = 12521;
	$p = $num;
	$revnum = 0;
	while($num != 0){
		$rem = $num % 10;
		$revnum = $revnum * 10 + $rem;
		$num = (int)($num/10);
	}
	if($revnum == $p)
		echo "Number is Palindrome.";
	else
	echo "Number is NOT Palindrome.";
	
?>