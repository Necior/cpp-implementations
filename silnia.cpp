#include <iostream>

unsigned long int silnia(unsigned long int n) {
  if(n == 0) {
    return 1;
  }
  return n*silnia(n-1);
}

int main() {
  unsigned long int n;
  std::cout << "Z jakiej liczby chcesz silnie? ";
  std::cin >> n;
  std::cout << "Silnia z " << n << " wynosi: " << std::endl;
  std::cout << silnia(n) << std::endl;
  return 0;
}
