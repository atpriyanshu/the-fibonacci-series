# Todo:
# - Make it look good.

fibonacci = (x) ->
  if x <= 2 then return x - 1
  fibonacci(x - 1) + fibonacci(x - 2)

console.log(fibonacci(1));   # returns 0
console.log(fibonacci(2));   # returns 1
console.log(fibonacci(3));   # returns 1
console.log(fibonacci(15));  # returns 377
console.log(fibonacci(20));  # returns 4181
