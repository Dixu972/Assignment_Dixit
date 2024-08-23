<?php

header("Content-Type: application/json");
header("Access-Control-Allow-Origin: *");
header("Access-Control-Allow-Methods: PUT");
header("Access-Control-Allow-Headers: Content-Type, Access-Control-Allow-Headers, Authorization, X-Requested-With");

// Get the input data
$data_arr = json_decode(file_get_contents("php://input"), true);

if (isset($data_arr["id"])) {
    $id = $data_arr["id"];
    
    $query = "UPDATE users SET ";

    // Append fields to update if they are provided
    if (isset($data_arr["name"])) {
        $uname = $data_arr["name"];
        $query .= "name='$uname', ";
    }
    if (isset($data_arr["email"])) {
        $uemail = $data_arr["email"];
        $query .= "email='$uemail', ";
    }
    if (isset($data_arr["gender"])) {
        $ugender = $data_arr["gender"];
        $query .= "gender='$ugender', ";
    }
    if (isset($data_arr["mobile_no"])) {
        $umobile_no = $data_arr["mobile_no"];
        $query .= "mobile_no='$umobile_no', ";
    }
    if (isset($data_arr["password"])) {
        $upassword = base64_encode($data_arr["password"]);
        $query .= "password='$upassword', ";
    }

    // Remove the last comma and space
    $query = rtrim($query, ', ');

    // Add the WHERE clause
    $query .= " WHERE id='$id'";

    require_once "dbconfig.php";

    // Execute the query
    if (mysqli_query($conn, $query)) {
        echo json_encode(array("message" => "User Data Updated Successfully", "status" => true));
    } else {
        echo json_encode(array("message" => "Failed to Update Data", "status" => false));
    }
} else {
    echo json_encode(array("message" => "User ID is missing", "status" => false));
}

?>
