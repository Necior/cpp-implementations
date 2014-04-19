#include <iostream>

bool isInTab(int tab[], int value, int right, int left = 0) {
  int midIndex = (right-left)/2 + left;
  if(right-left == 1 && value != tab[midIndex]) {
    if(value == tab[midIndex + 1]) {
      return true;
    }
    else {
      return false;
    }
  }
  if(value == tab[midIndex]) {
    return true;
  }
  else {
    if(value < tab[midIndex]) {
      return isInTab(tab, value, midIndex, left);
    }
    else {
      return isInTab(tab, value, right, midIndex);
    }
  }
}

int main() { // usage example
  const int n = 10;
  int iLookFor = 9000;
  int tab[n] = {1, 2, 3, 4, 6, 8, 99, 100, 123, 9000};
  if(isInTab(tab, iLookFor, n-1)) {
    std::cout << "Found." << std::endl;
  }
  else {
    std::cout << "Not found." << std::endl;
  }
  return 0;
}
