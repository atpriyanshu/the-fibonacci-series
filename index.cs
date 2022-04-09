Console.WriteLine(fibonacci(1));  // return 0
Console.WriteLine(fibonacci(2));  // return 1
Console.WriteLine(fibonacci(3));  // return 1
Console.WriteLine(fibonacci(15));  // return 377
Console.WriteLine(fibonacci(20));  // return 4181

static int fibonacci(int x) {
  if (x < 3) {
    return x - 1;
  }
  return fibonacci(x - 1) + fibonacci(x - 2);
}
