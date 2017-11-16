
#include <iostream>
using namespace std;

class hoge {
  public:

  int a;
  void fuga ();
};

  void hoge::fuga() {
    cout << "hoge" << endl;
  }


int main () {
  hoge h;
  h.fuga();
}
