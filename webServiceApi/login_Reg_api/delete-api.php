<?php

header("Content-Type: application/json");
header("Access-Control-Allow-Origin: *");
header("Access-Control-Allow-Methods: DELETE");
header("Access-Control-Allow-Headers: Content-Type, Access-Control-Allow-Headers, Authorization, X-Requested-With");


$data_arr = json_decode(file_get_contents("php://input"), true);

if (isset($data_arr["id"])) 
{
    $id = $data_arr["id"];

    // Database connection
    require_once "dbconfig.php";

    // Prepare the DELETE query
    $query = "DELETE FROM users WHERE id='".$id."'";

    // Execute the query
    if (mysqli_query($conn, $query)) {
        echo json_encode(array("message" => "User Deleted Successfully", "status" => true));
    } else {
        echo json_encode(array("message" => "Failed to Delete User", "status" => false));
    }
} else {
    echo json_encode(array("message" => "User ID is missing", "status" => false));
}

?>
