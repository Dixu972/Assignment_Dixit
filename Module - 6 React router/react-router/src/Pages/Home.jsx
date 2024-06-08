import React from "react";

function Home() {
    return (
        <>
            <div
                className="container d-flex justify-content-center"
                style={{ height: "85vh" }}
            >
                {/* Heading for the Home page */}
                <div className="container">
                    <h1 align="center ">Welcome To Coading</h1>
                    <img className="img_banner" src={require('./welcome-banner.jpg')} alt="" />
                </div>

            </div>
        </>
    );
}

export default Home;