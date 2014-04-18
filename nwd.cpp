#include <iostream>
#include <sstream>

int nwd(int a, int b) { // assuming (a > 0) and (b > 0)
  int c = 0; // initial value doesn't matter
  while(b != 0) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}

int main(int argc, char* argv[]) {
  int a = 12;
  int b = 8;
  if(argc >= 3) {
    std::istringstream sa(argv[1]);
    if(!(sa >> a)) {
      std::cerr << argv[1] << " is not a number." << std::endl;
      return -1;
    }
    std::istringstream sb(argv[2]);
    if(!(sb >> b)) {
      std::cerr << argv[2] << " is not a number." << std::endl;
      return -1;
    }
    std::cout << nwd(a, b) << std::endl;
  }
  else {
    std::cout << "No command line arguments. Running sample." << std::endl;
    std::cout << "Result for a = " << a << " and b = " << b << ":" << std::endl;
    std::cout << nwd(12, 8) << std::endl;
  }
  return 0;
}
