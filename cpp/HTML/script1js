// Initialize variables
let songIndex = 0;
let audioElement = new Audio('songs/1.mp3'); // Ensure this path exists
let masterPlay = document.getElementById('masterplay');
let progressBar = document.getElementById('myProgressBar');
let gif = document.getElementById('gif');
let masterSongName = document.getElementById('masterSongName');
let songItems = Array.from(document.getElementsByClassName('songItem'));

let songs = [
    { songName: "Let Me Love - 1", filePath: "songs/1.mp3", coverPath: "1.jpg" },
    { songName: "Let Me Love - 2", filePath: "songs/2.mp3", coverPath: "2.jpg" },
    { songName: "Let Me Love - 3", filePath: "songs/3.mp3", coverPath: "3.jpg" },
    { songName: "Let Me Love - 4", filePath: "songs/4.mp3", coverPath: "4.jpg" },
    { songName: "Let Me Love - 5", filePath: "songs/5.mp3", coverPath: "5.jpg" },
    { songName: "Let Me Love - 6", filePath: "songs/6.mp3", coverPath: "6.jpg" },
    { songName: "Let Me Love - 7", filePath: "songs/7.mp3", coverPath: "7.jpg" },
    { songName: "Let Me Love - 8", filePath: "songs/8.mp3", coverPath: "8.jpg" },
    { songName: "Let Me Love - 9", filePath: "songs/9.mp3", coverPath: "9.jpg" },
    { songName: "Let Me Love - 10", filePath: "songs/10.mp3", coverPath: "10.jpg" }
];

// Update UI with songs info
songItems.forEach((element, i) => {
    element.getElementsByTagName("img")[0].src = songs[i].coverPath;
    element.getElementsByClassName("songName")[0].innerText = songs[i].songName;
});

// Play/Pause main button
masterPlay.addEventListener('click', () => {
    if (audioElement.paused || audioElement.currentTime <= 0) {
        audioElement.play();
        masterPlay.classList.remove("fa-circle-play");
        masterPlay.classList.add("fa-pause-circle");
        gif.style.opacity = 1;
    } else {
        audioElement.pause();
        masterPlay.classList.remove("fa-pause-circle");
        masterPlay.classList.add("fa-circle-play");
        gif.style.opacity = 0;
    }
});

// Update progress bar
audioElement.addEventListener('timeupdate', () => {
    let progress = parseInt((audioElement.currentTime / audioElement.duration) * 100);
    progressBar.value = progress;
});

// Seek in song
progressBar.addEventListener('change', () => {
    audioElement.currentTime = progressBar.value * audioElement.duration / 100;
});

// Play clicked song
const makeAllPlays = () => {
    Array.from(document.getElementsByClassName('songItemplay')).forEach((element) => {
        element.classList.remove('fa-pause-circle');
        element.classList.add('fa-circle-play');
    });
};

Array.from(document.getElementsByClassName('songItemplay')).forEach((element) => {
    element.addEventListener('click', (e) => {
        makeAllPlays();
        songIndex = parseInt(e.target.id) - 1;
        e.target.classList.remove('fa-circle-play');
        e.target.classList.add('fa-pause-circle');
        audioElement.src = songs[songIndex].filePath;
        masterSongName.innerText = songs[songIndex].songName;
        audioElement.currentTime = 0;
        audioElement.play();
        gif.style.opacity = 1;
        masterPlay.classList.remove("fa-circle-play");
        masterPlay.classList.add("fa-pause-circle");
    });
});

// Next song
document.getElementById('next').addEventListener('click', () => {
    songIndex = (songIndex + 1) % songs.length;
    audioElement.src = songs[songIndex].filePath;
    masterSongName.innerText = songs[songIndex].songName;
    audioElement.currentTime = 0;
    audioElement.play();
    masterPlay.classList.remove("fa-circle-play");
    masterPlay.classList.add("fa-pause-circle");
});

// Previous song
document.getElementById('previous').addEventListener('click', () => {
    songIndex = (songIndex - 1 + songs.length) % songs.length;
    audioElement.src = songs[songIndex].filePath;
    masterSongName.innerText = songs[songIndex].songName;
    audioElement.currentTime = 0;
    audioElement.play();
    masterPlay.classList.remove("fa-circle-play");
    masterPlay.classList.add("fa-pause-circle");
});
