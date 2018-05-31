
#include <iostream>
#include <algorithm>
using namespace std;

int a, b;

int main(){
  cin >> a >> b;
  cout << max(a + b ,max(a - b, a * b)) << endl;
  return 0;
}
