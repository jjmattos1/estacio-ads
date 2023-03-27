let dayNumber = new Date().getDay();
switch(dayNumber) {
    case 0:
                console.log("Today is Saturnday.");
                break;
    case 1:
                console.log("Hoje é Segunda-feira.")
                break;
    case 2:
                console.log("Hoje é Terça-Feira.");
                break;
    case 3:
                console.log("Hoje é Quarta-feira.");
                break;
    case 4:
                console.log("Hoje é Quinta-feira");
                break;
    case 5:
                console.log("Hoje é Sexta-feira.");
                break;
    case 6:
                console.log("Hoje é Sábado.");
                break;
    default:    
                console.log("Sem default.")
                break;
}

let time = new Date().getHours();
//console.log(time);
console.log(`\nA hora do dia é: ${time}\n`);
//console.log(`${time}`);


if (time < 10) {
    greeting = "Good morning";
} else if (time < 20) {
    greeting = "Good day";
} else {
    greeting = "Good evening";
}

//another way of doing the logic above, below
Greeting = (time < 10) ? "Good morning" :
            (time <20) ? "Good day" :
                        "Good evening"

//for/in examples
let frutas = ['Laranja','Uva','Pera']

for (var i = 0; i < frutas.length; i++) {
    console.log('Nome da fruta contida no Array: '+ frutas[i]);
}
console.log('\n');
for (let fruta in frutas) {
    console.log('Nome da fruta contida no Array via in: '+ frutas[fruta]);
}
console.log('\n');
const numbers = [45, 4, 9, 16, 25];
let txtIn = "";
for (let x in numbers) {
    txtIn += ` ${numbers[x]}`;
    console.log(`For In teste: ${txtIn}`);
}
console.log('\n');
let txtOf = "";
const letters = ["a","b","c"];
for (const x of letters) {
    txtOf += ` ${x}`;
    console.log(`For Of teste: ${txtOf}`)
}