const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split(' ');

const a = parseInt(input[0], 10);
const b = parseInt(input[1], 10);

const firstResult = (a < b) ? 1 : 0;

const secondResult = (a === b) ? 1 : 0; 

console.log(`${firstResult} ${secondResult}`);