#include <iostream>

void szukaj(int tab[], int left, int right, int x) {
  if(left > right) {
    std::cout << "Nie znaleziono.";
  }
  else {
    if(tab[left] == x) {
      std::cout << "Znaleziono.";
    }
    else {
      szukaj(tab, left+1, right, x);
    }
  }
}

int main() {
  int tabSize;
  std::cout << "Podaj ilosc elementow tablicy: ";
  std::cin >> tabSize;
  int tab[tabSize];
  std::cout << "Wypisz kolejne elementy tablicy oddzielone spacjami: ";
  for(int i = 0; i < tabSize; i++) {
    std::cin >> tab[i];
  }
  int x;
  std::cout << "Jakiego elementu szukasz? ";
  std::cin >> x;
  szukaj(tab, 0, tabSize-1, x);
  std::cout << std::endl;
  return 0;
}
