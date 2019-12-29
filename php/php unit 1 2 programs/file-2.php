<?php

	//Area & Perimeter (29-9-19)
	$side = 15;		$y = 10;
	$sq_pmtr = $side * 4;
	$sq_area = $side * $side;
	$rec_pmtr = 2 * ($side + $y);
	$rec_area = $side * $y;
	$height = 13;
	$tri_pmtr = $side + $side + $side;
	$tri_area = 1/2 * $side * $height;
	$radius = 9;
	$circumference = 2 * 3.14 * $radius;
	$area = 3.14 * $radius * $radius;

	echo "Perimeter of Square is: ".$sq_pmtr;
	echo "<BR>"."Area of Square is: ".$sq_area;
	echo "<BR>"."Perimeter of Rectangle is: ".$rec_pmtr;
	echo "<BR>"."Area of Rectangle is: ".$rec_area;
	echo "<BR>"."Perimeter of Triangle is: ".$tri_pmtr;
	echo "<BR>"."Area of Triangle is: ".$tri_area;
	echo "<BR>"."Circumference of Circle is: ".$circumference;
	echo "<BR>"."Area of Circle is: ".$area;
	
?>