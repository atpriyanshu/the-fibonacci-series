Console.WriteLine(fibonacci(01));  // returns 0
Console.WriteLine(fibonacci(02));  // returns 1
Console.WriteLine(fibonacci(03));  // returns 1
Console.WriteLine(fibonacci(15));  // returns 377
Console.WriteLine(fibonacci(20));  // returns 4181

static int fibonacci(int x) {
  if (x <= 2) {
    return x - 1;
  }

  return fibonacci(x - 1) + fibonacci(x - 2);
}
