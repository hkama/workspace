
#include "InputStream.h"
#include <iostream>
using namespace std;

bool InputStream::Set() {
  cout << "InputStream::Set called" << endl;
  cin >> m_n;
  return m_n >= 0;
}




