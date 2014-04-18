#include <iostream>

float map(float amin, float amax, float bmin, float bmax, float x) {
  if(bmax - bmin == 0) {
    return bmin;
  }
  else {
    float k = (amax - amin)/(bmax - bmin);
    std::cout << k << std::endl;
    return (x - amin)/k + bmin;
  }
}

int main() {
  // usage example
  std::cout << map(0, 255, 0, 100, 128) << std::endl;
  return 0;
}
