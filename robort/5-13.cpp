#include <iostream>
using namespace std;

int main(){
  // これは単なる初期化
  char a[]= "hoge";

  // これはポインタbに文字列リテラルを代入していることになる
  const char *b= "hoge";
  const char *c= "hoge";
  
  cout << "a: " << a << "  size: " << sizeof(a) << " address: " << &a << endl;
  cout << "b: " << b << "  size: " << sizeof(b) << " address: " << &b << endl;
  cout << "c: " << c << "  size: " << sizeof(c) << " address: " << &c << endl;

}

// a: hoge  size: 5 address: 0x7ffc35f259d0
// b: hoge  size: 8 address: 0x7ffc35f259c0
// c: hoge  size: 8 address: 0x7ffc35f259c8
