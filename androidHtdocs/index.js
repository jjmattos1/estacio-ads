// comment?

function displayDate()
{
  document.getElementById("demo").innerHTML = Date();
}

// get screen size
function displayWSize() {
  var w = window.innerWidth;
  var h = window.innerHeight;
  
  var showDS = document.getElementById("showDS");
  showDS.innerHTML = "Browser display size is "+w+" x "+h+"!";
}

function setAudioInitVol() {
  var audio = document.getElementById("audio1");
  audio.volume = 0.2;
}

function changeDiv1_2() {
  let d1 = document.getElementById("d1");
  let d2 = document.getElementById("d2");
  let objc1 = document.getElementById("c1");
  let objx1 = document.getElementById("x1");
  let objy1 = document.getElementById("y1");
  
  objc1.style.left = `${x1.value}px`;
  objc1.style.top = `${y1.value}px`;
  objc1.innerHTML = `(${x1.value},${y1.value})`;
  
  let ad1 = d1.style.left;
  d1.style.left = ad1+`${x1.value}px`;
  d1.style.top = `${y1.value}px`;
  d1.innerHTML = `(${x1.value},${y1.value})`;
  d2.style.left = `${x1.value}px`;
  d2.style.top = `${y1.value}px`;
  d2.innerHTML = `(${x1.value},${y1.value})`;
}


