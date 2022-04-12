function fibonacci(x)
  if (x <= 2) then
    return x - 1
  end

  return fibonacci(x - 1) + fibonacci(x - 2)
end

print(fibonacci(01))  -- returns 0
print(fibonacci(02))  -- returns 1
print(fibonacci(03))  -- returns 1
print(fibonacci(15))  -- returns 377
print(fibonacci(20))  -- returns 4181
