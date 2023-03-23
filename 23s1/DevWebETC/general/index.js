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
/* Does not works as on 22/03/23 @ Android with Acode app
class resultsContainer {
  static mult1Result = 0;
}
*/
function multiply(num1,num2) {
  //var mult1Result = 0;
  let multResult = num1*num2;
  return multResult;
  /*
  ref:
  objc1.style.top = `${y1.value}px`;
  objc1.innerHTML = `(${x1.value},${y1.value})`;
  */
}

function updateDiv2() {
  let localDiv = document.getElementById("multResultDiv2");
  let value1 = document.getElementById("mValue1");
  let value2 = document.getElementById("mValue2");
  //let result = [0,1,2];
  //result.pop(multiply(`${value1.value}`,`${value2.value}`));
  let result = multiply(`${value1.value}`,`${value2.value}`);
  localDiv.innerHTML += result;
  localDiv.innerHTML += " - ";
  //document.getElementById("multResultDiv2").innerHTML += result.join(" - ");
  //.join(" - ");
  //localDiv.innerHTML += `${value1.value}`;
  //localDiv.innerHTML += result.join(" - ");
}

/*
var localDiv = document.getElementById("multResultDiv");
localDiv.innerHTML += mult1Result;

question: does js has a static or global variable? that works outside of a function?
*/