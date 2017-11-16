
#include <iostream>
using namespace std;

class Hoge {
public:
  int m;
  Hoge(int a = 0);
  void Show();
};

Hoge::Hoge(int a) {
  m = a;
}

void Hoge::Show () {
  cout << m << endl;
}

int main() {
  // 4要素目はデフォルトコンストラクタで初期化されるので、0がセットされる
  Hoge a[4] = {Hoge(), Hoge(2), Hoge(3)};
  for (size_t i=0; i< 4; i++) {
    a[i].Show();
  }
}

// 0
// 2
// 3
// 0
