def fibonacci(x) :
  if (x < 3) :
    return x - 1
  return fibonacci(x - 1) + fibonacci(x - 2)

print(fibonacci(1))  # return 0
print(fibonacci(2))  # return 1
print(fibonacci(3))  # return 1
print(fibonacci(15))  # return 377
print(fibonacci(20))  # return 4181
