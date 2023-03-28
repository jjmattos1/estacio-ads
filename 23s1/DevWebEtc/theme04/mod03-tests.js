// Vetores
let mixedArray = ['Um', 2, 3, 'Quatro', 5.5];
// you can create arrays as if it is an Object:
let students = new Array('Alex','Anna','João');
console.log(students[0]);
console.log('\n');
let frutas = ['Laranja','Uva','Limão'];
for (x of frutas)
  console.log(' '+x);
  let fLenght = frutas.lenght;
  console.log(fLenght);
console.log('\n');
delete frutas[0];
console.log('\n');
for (x of frutas)
  console.log(' '+x);
console.log('\n');
console.log('Frutas array lenght via .lenght propertie:\n')
console.log(frutas.lenght);
console.log('\n');
students.push('Helena','Maria');
let xTxt = "";
for (xStudents of students) {
  xTxt += ` ${xStudents}`;
}
console.log(xTxt);
console.log('\n');
students.splice(3,1,'Jonas');
let xTxtSplice = "";
for (xStudents of students) {
  xTxtSplice += ` ${xStudents}`;
}
console.log('"students" array mod with Splice method:'+xTxtSplice);
console.log('\nFrutas array lenght via "Object.keys(students) lenght" syntax: '+ Object.keys(students).length)
// pop method
let studentsPop = students.pop();
console.log('\n"pop" method, removes only the final element of the array: '+studentsPop);
let studentsShift = students.shift();
console.log('\n"shift" method, removes the first element of the array and then reindexes it: '+studentsShift);