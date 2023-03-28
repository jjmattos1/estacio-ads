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
console.log('\n"pop" method, removes only the final element of the array: '+studentsPop+' removed');
// shift method
let studentsShift = students.shift();
console.log('\n"shift" method, removes the first element of the array and then reindexes it: '+studentsShift+' removed');
//
console.log('Students array till now:');
let xTest = "";
for (xStudents of students) {
  xTest += ` ${xStudents}`;
}
console.log(xTest);
console.log('Students lenght test/add, adding Maria:');
console.log(students[students.length] = 'Maria');
xTest = "";
console.log('Students array after Maria added via lenght test: ');
for (xStudents of students) {
  xTest += ` ${xStudents}`;
}
console.log(xTest);
console.log('Helena added via spice method (3,0,Helena): ')
students.splice(3,0,'Helena');
xTest = "";
for (xStudents of students) {
  xTest += ` ${xStudents}`;
}
console.log(xTest);
console.log('Printing only the array by its name: ')
console.log(students);
console.log('Replace Anna via splice(pos1,1, Whitney): ');
students.splice(1,1,'Whitney');
console.log(students);
console.log('students Array size  now:');
console.log(Object.keys(students).length);
console.log('delete method usage, delete students[0]');
delete students[0];
console.log(students);
console.log(
Object.keys(students).length);
/*
primos.splice(2,2);

console.log(primos); //imprimirá 2,3,11,13,17’

Nesse método, para fins de remoção, o primeiro parâmetro indica o índice e o segundo, a quantidade de elementos a serem excluídos.
*/
//alert(students.length);
console.log('students array lenght: ');
console.log(students.length);
