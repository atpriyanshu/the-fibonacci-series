def fibonacci(x)
  if (x <= 2)
    return x - 1;
  end

  return fibonacci(x - 1) + fibonacci(x - 2);
end

print(fibonacci(01), "\n");  # returns 0
print(fibonacci(02), "\n");  # returns 1
print(fibonacci(03), "\n");  # returns 1
print(fibonacci(15), "\n");  # returns 377
print(fibonacci(20), "\n");  # returns 4181
