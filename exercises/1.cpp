/* Odwracanie kolejnosci elementow tablicy liczb naturalnych za pomoca rekurencji naturalnej */
#include <iostream>

#define showOutput

int odwroc(int tab[], int maxIndex, int n = 0) {
  if(2*n > maxIndex) {
    return 0;
  }
  int helper = tab[n];
  tab[n] = tab[maxIndex - n];
  tab[maxIndex - n] = helper;
  odwroc(tab, maxIndex, n+1);
}

int main() { // usage example
  const int maxIndex = 5;
  int tab[maxIndex+1] = {1, 2, 4, 8, 3, 66};
  
  #ifdef showOutput
  for(int i = 0; i <= maxIndex; i++) {
    std::cout << tab[i] << " ";
  }
  std::cout << std::endl;
  #endif
  
  odwroc(tab, maxIndex);
  
  #ifdef showOutput
  for(int i = 0; i <= maxIndex; i++) {
    std::cout << tab[i] << " ";
  }
  std::cout << std::endl;
  #endif
  
  return 0;
}
