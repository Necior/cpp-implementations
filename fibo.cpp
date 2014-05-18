#include <iostream>

int fibo(unsigned long int n) {
  if(n <= 2) {
    return 1;
  }
  return fibo(n-1) + fibo(n-2);
}

int main() {
  unsigned long int n;
  std::cout << "Ktora liczbe ciagu Fibonancciego mam wypisac? ";
  std::cin >> n;
  std::cout << n << ". liczba ciagu Fibonnaciego to " << fibo(n) << std::endl;
  return 0;
}
