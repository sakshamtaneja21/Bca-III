<?php
	$name = isset($_POST['name']) ? $_POST['name'] : NULL;
	$age = isset($_POST['age']) ? $_POST['age'] : NULL;
	$sex = isset($_POST['sex']) ? $_POST['sex'] : NULL;
	$email = isset($_POST['mail']) ? $_POST['mail'] : NULL;
	$psw = isset($_POST['psw']) ? $_POST['psw'] : NULL;
	echo "Your Name is ".$name.".<BR>";
	echo "Your Age is ".$age.".<BR>";
	echo "Your Gender is ".$sex.".<BR>";
	if(!filter_var($email, FILTER_VALIDATE_EMAIL)){
		echo "Not a valid Email!";
	}
	else{
		echo "Your Email is ".$email.".<BR>";
	}
	echo "Your Password is ".$psw;
?>