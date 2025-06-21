<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My Artwork Portfolio</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f8f9fa;
        }

        header {
            background-color: #343a40;
            color: #fff;
            padding: 20px;
            text-align: center;
        }

        nav {
            background-color: #495057;
            color: #fff;
            padding: 10px 0;
            text-align: center;
        }

        nav a {
            color: #fff;
            text-decoration: none;
            margin: 0 15px;
            font-size: 18px;
        }

        nav a:hover {
            text-decoration: underline;
        }

        .gallery {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
            gap: 20px;
            padding: 20px;
        }

        .gallery img {
            width: 100%;
            border-radius: 10px;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
            transition: transform 0.3s;
        }

        .gallery img:hover {
            transform: scale(1.05);
        }

        footer {
            background-color: #343a40;
            color: #fff;
            text-align: center;
            padding: 10px;
            position: fixed;
            bottom: 0;
            width: 100%;
        }

        @media screen and (max-width: 768px) {
            nav a {
                display: block;
                margin: 10px 0;
            }
        }
    </style>
</head>
<body>
    <header>
        <h1>Welcome to My Art Portfolio</h1>
        <p>Explore my creative journey through sketches and artworks.</p>
    </header>

    <nav>
        <a href="#">Home</a>
        <a href="#about">About Me</a>
        <a href="#gallery">Gallery</a>
        <a href="#contact">Contact</a>
    </nav>

    <section id="gallery" class="gallery">
        <img src="artwork1.jpg" alt="Artwork 1">
        <img src="artwork2.jpg" alt="Artwork 2">
        <img src="artwork3.jpg" alt="Artwork 3">
        <img src="artwork4.jpg" alt="Artwork 4">
        <img src="artwork5.jpg" alt="Artwork 5">
        <img src="artwork6.jpg" alt="Artwork 6">
        <img src="artwork7.jpg" alt="Artwork 7">
        <img src="artwork8.jpg" alt="Artwork 8">
        <img src="artwork9.jpg" alt="Artwork 9">
    </section>

    <footer>
        <p>&copy; 2024 My Art Portfolio. All rights reserved.</p>
    </footer>
</body>
</html>
