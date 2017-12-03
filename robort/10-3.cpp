#include <iostream>

int main () {
  try {
    throw 1;
  }
  catch (int error) {
    std::cout << "hoge" << std::endl;
  }
}
