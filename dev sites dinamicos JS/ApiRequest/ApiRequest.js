async function fetchMovieData(title, year) {
    const apiKey = 'e55090d1'; // Sua chave da OMDb API
    const url = `http://www.omdbapi.com/?t=${encodeURIComponent(title)}&y=${year}&apikey=${apiKey}`;

    try {
        const response = await fetch(url);
        const data = await response.json();

        if (data.Response === "True") {
            document.getElementById("movie-title").textContent = data.Title;
            document.getElementById("movie-year").textContent = data.Year;
            document.getElementById("movie-plot").textContent = data.Plot;
            const poster = document.getElementById("movie-poster");
            poster.src = data.Poster;
            poster.style.display = "block";
        } else {
            alert("Filme não encontrado: " + data.Error);
        }
    } catch (error) {
        console.error("Erro ao buscar dados do filme:", error);
    }
}


fetchMovieData("Fight Club", "1999");
