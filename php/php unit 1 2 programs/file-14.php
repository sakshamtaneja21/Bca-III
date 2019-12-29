<?php
	
	//Factorial of a Number using Recursive function(19-9-19)
	function facto($n){
		if($n <= 1)
			return 1; 
		else
			return $n * facto($n - 1);  
	}
	echo "Factorial of 7 is " .facto(7);

?>