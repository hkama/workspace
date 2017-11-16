
#include <iostream>
using namespace std;

void a() {
  static int a = 2;
  int b = 3;
  cout <<"a="<<a<<", b="<<b<<endl;
  a++;
  b++;
}

void b() {
  a();
  a();
}

int main(){
  b();
}
