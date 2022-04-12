def fibonacci(x)
  if (x < 3)
    return x - 1;
  end
  return fibonacci(x - 1) + fibonacci(x - 2);
end

print(fibonacci(01), "\n");  # return 0
print(fibonacci(02), "\n");  # return 1
print(fibonacci(03), "\n");  # return 1
print(fibonacci(15), "\n");  # return 377
print(fibonacci(20), "\n");  # return 4181
