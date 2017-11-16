#include <iostream>
using namespace std;

class Test {
  int a;
public:
  void Func();
};

void Test::Func () {
  a = 1;
  cout << a << endl;
}
  
  
