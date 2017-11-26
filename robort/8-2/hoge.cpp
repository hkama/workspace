
#include <iostream>
#include <string>
using namespace std;

int main () {
  string a = "hogehoge";
  // 何も返してくれない
  cout << a [10] << endl;
  // out_of_rangeを返してくれる
  cout << a.at(10) << endl;
}

