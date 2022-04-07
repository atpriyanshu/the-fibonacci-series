#include <iostream>
using namespace std;
int fibonacci(int);

int main() {
  cout << fibonacci(1) << endl;  // return 0
  cout << fibonacci(2) << endl;  // return 1
  cout << fibonacci(3) << endl;  // return 1
  cout << fibonacci(15) << endl;  // return 377
  cout << fibonacci(20) << endl;  // return 4181

  return 0;
}

int fibonacci(int x) {
  if (x < 3) {
    return x - 1;
  }
  return fibonacci(x - 1) + fibonacci(x - 2);
}
