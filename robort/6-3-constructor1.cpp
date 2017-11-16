
#include <iostream>
using namespace std;

class Hoge {
public:
  int m;
  Hoge();
  void Show();
};
  
Hoge::Hoge(){
  m = 0;
}

void Hoge::Show() {
  cout << m << endl;
}

int main () {
  Hoge h;
  h.Show();
}
