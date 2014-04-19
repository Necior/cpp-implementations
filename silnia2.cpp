#include <iostream>

unsigned long int silnia2(unsigned long int n, unsigned long tmp = 1) {
  if(n == 0) {
    return tmp;
  }
  else {
    return silnia2(n-1, n*tmp);
  }
}

int main() { // example usage
  std::cout << silnia2(3) << std::endl;
  return 0;
}
