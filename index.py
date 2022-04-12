def fibonacci(x) :
  if (x <= 2) :
    return x - 1

  return fibonacci(x - 1) + fibonacci(x - 2)

print(fibonacci(1))   # returns 0
print(fibonacci(2))   # returns 1
print(fibonacci(3))   # returns 1
print(fibonacci(15))  # returns 377
print(fibonacci(20))  # returns 4181
