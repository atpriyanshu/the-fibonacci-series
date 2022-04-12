#include <stdio.h> 
int fibonacci(int);

int main() {
  printf("%d\n", fibonacci(01));  // returns 0
  printf("%d\n", fibonacci(02));  // returns 1
  printf("%d\n", fibonacci(03));  // returns 1
  printf("%d\n", fibonacci(15));  // returns 377
  printf("%d\n", fibonacci(20));  // returns 4181
  return 0;
}

int fibonacci(int x) {
  if (x <= 2) {
    return x - 1;
  }

  return fibonacci(x - 1) + fibonacci(x - 2);
}
