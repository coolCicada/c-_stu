function Solution() {
  const [a, b] = readline().split(' ').map(Number);
  const totalStr = a + b + '';
  const totalArr = totalStr.split('');
  const resArr = [];

  let count = 0;
  for (let i = totalArr.length - 1; i >= 0; i--) {
    if (count === 3 && totalArr[i] !== '-') {
      resArr.unshift(',');
      count = 0;
    }
    resArr.unshift(totalArr[i]);
    count += 1;
  }

  console.log(resArr.join(''));
}

let i = 0;
const lines = []

function readline() { return lines[i++] }
const readlineM = require('readline')
const rl = readlineM.createInterface({
  input: process.stdin,
  output: process.stdout
})
rl.on('line', (input) => lines.push(input));
rl.on('close', Solution);