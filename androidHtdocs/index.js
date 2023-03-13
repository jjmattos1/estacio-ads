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


/*
É interessante notar que as duas produzem o mesmo efeito visual (que <b> e <i> respectivamente) em um texto, ou seja, marcá-lo como negrito e/ou itálico. Entretanto, há uma diferença importante entre elas, que vai além da visualização do texto no navegador pela maioria dos usuários. A função semântica de ambas é perceptível em dispositivos de leitura de tela, que transformam o texto em áudio, e normalmente são utilizados por pessoas com deficiência visual.
*/