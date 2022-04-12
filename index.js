"use strict";

console.log(fibonacci(01));  // returns 0
console.log(fibonacci(02));  // returns 1
console.log(fibonacci(03));  // returns 1
console.log(fibonacci(15));  // returns 377
console.log(fibonacci(20));  // returns 4181

function fibonacci(x) {
  if (x <= 2) {
    return x - 1;
  }

  return fibonacci(x - 1) + fibonacci(x -2);
}
