#include <stdio.h> 
int fibonacci(int);

int main() {
  printf("%d\n", fibonacci(1)); // return 0
  printf("%d\n", fibonacci(2)); // return 1
  printf("%d\n", fibonacci(3)); // return 1
  printf("%d\n", fibonacci(15)); // return 377
  printf("%d\n", fibonacci(20)); // return 4181
  return 0;
}

int fibonacci(int x) {
  if (x < 3) {
    return x - 1;
  }
  return fibonacci(x - 1) + fibonacci(x - 2);
}
