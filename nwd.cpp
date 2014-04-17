#include <iostream>

int nwd(int a, int b) { // assuming (a > 0) and (b > 0)
  int c = 0; // initial value doesn't matter
  while(b != 0) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}

int main() { // usage example
  std::cout << nwd(15, 4) << std::endl;
  return 0;
}
