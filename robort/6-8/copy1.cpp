
#include "IntArray.h"
#include <iostream>
using namespace std;

void Show (Hoge ia) {
  cout << ia.Size() << endl;
}

int main() {
  Hoge h;
  Show(h);
}


//こちらの実行は、コピーコンストラクタの中身を変えてやっているのでエラーは出ない
