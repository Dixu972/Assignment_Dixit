<?php
// insert api
header("Content-Type: application/json");
header("Acess-Control-Allow-Origin: *");
header("Acess-Control-Allow-Methods: POST");
header("Access-Control-Allow-Headers: Content-Type, Access-Control-Allow-Headers, Authorization, X-Requested-With");

$data_arr = json_decode(file_get_contents("php://input"), true);

$uname = $data_arr["name"]; 
$uemail = $data_arr["email"]; 
$ugender = $data_arr["gender"]; 
$umobile_no = $data_arr["mobile_no"];
$upassword = base64_encode($data_arr["password"]);

require_once "dbconfig.php";

$query = "INSERT INTO users (name,email,gender,mobile_no,password) 
                       VALUES ('".$uname."', '".$uemail."', '".$ugender."', '".$umobile_no."', '".$upassword."')";

if(mysqli_query($conn, $query) or die("Insert Query Failed"))
{
	echo json_encode(array("message" => "Registration Successfully", "status" => true));	
}
else
{
	echo json_encode(array("message" => "Failed To Registration ", "status" => false));	
}


?>