
#include "copy1b.h"
#include <iostream>
using namespace std;

void Show (Hoge hoge) {
  hoge.Show();
}
  
int main() {
  Hoge h;
  // Hoge h();とやってはいけない。これはHoge型を返す引数なしの関数プロトタイプとみなされてしまう。
  Show (h);
}

// 実行すると、2回メモリを開放しようとしてエラーが出る。
