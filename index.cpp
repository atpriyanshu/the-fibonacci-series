#include <iostream>
using namespace std;
int fibonacci(int);

int main() {
  cout << fibonacci(01) << endl;  // returns 0
  cout << fibonacci(02) << endl;  // returns 1
  cout << fibonacci(03) << endl;  // returns 1
  cout << fibonacci(15) << endl;  // returns 377
  cout << fibonacci(20) << endl;  // returns 4181

  return 0;
}

int fibonacci(int x) {
  if (x <= 2) {
    return x - 1;
  }

  return fibonacci(x - 1) + fibonacci(x - 2);
}
