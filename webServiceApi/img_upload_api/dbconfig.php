<?php

$host = "localhost";
$user = "root";
$password ="";
$Database_name="webserviceapi";

$conn = mysqli_connect($host, $user, $password, $Database_name); 

if(!$conn){
    
	die("Connection failed: " . mysqli_connect_error());
}

?>