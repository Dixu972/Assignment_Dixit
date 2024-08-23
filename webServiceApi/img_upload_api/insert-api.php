<?php

// insert API

header("Content-Type: application/json");
header("Access-Control-Allow-Origin: *");
header("Access-Control-Allow-Methods: POST");
header("Access-Control-Allow-Headers: Content-Type, Access-Control-Allow-Headers, Authorization, X-Requested-With");

// Check if a file is uploaded
if (isset($_FILES['img']) && $_FILES['img']['error'] == 0) {

    // Get the image name
    $img =($_FILES['img']['name']);

    // Set the upload path
    $upload_dir = './upload/';
    $upload_path = $upload_dir . $img;

    // Ensure the upload directory exists
    if (!is_dir($upload_dir)) {
        mkdir($upload_dir, 0777, true);
    }

    // Get the temporary file path
    $tmp_file = $_FILES['img']['tmp_name'];

    // Move the file to the desired location
    if (move_uploaded_file($tmp_file, $upload_path)) {

        // Database connection
        require_once "dbconfig.php";

        // Insert the file name into the database
        $query = "INSERT INTO img_upload_api (img) VALUES ('$img')";

        // Execute the query
        if (mysqli_query($conn, $query)) {
            echo json_encode(array("message" => "Image inserted successfully.", "status" => true));
        } else {
            echo json_encode(array("message" => "Failed to insert image into database.", "status" => false));
        }

    } else {
        echo json_encode(array("message" => "Failed to move uploaded file.", "status" => false));
    }

} else {
    echo json_encode(array("message" => "No file was uploaded or there was an error with the file upload.", "status" => false));
}

?>
