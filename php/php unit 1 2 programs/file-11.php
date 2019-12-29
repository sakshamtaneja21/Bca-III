<?php

//Swapping 2 numbers using 3rd variable (19-9-19)
$x = 45;
$y = 78;
echo "Before Swap: ";
echo "X = ".$x;
echo " Y = ".$y;

echo "<BR>";

$tmp = $x;		$x = $y;		$y = $tmp;
echo "After Swap: ";
echo "X = ".$x;
echo " Y = ".$y;

?>