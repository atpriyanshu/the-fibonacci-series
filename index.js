"use strict";

console.log(fibonacci(1)); // return 0
console.log(fibonacci(2)); // return 1
console.log(fibonacci(3)); // return 1
console.log(fibonacci(15)); // return 377
console.log(fibonacci(20)); // return 4181

function fibonacci(x) {
  if (x < 3) {
    return x - 1;
  }
  return fibonacci(x - 1) + fibonacci(x -2);
}
