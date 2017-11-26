#include "Stream.h"
#include <iostream>
using namespace std;

double Stream::Get () const {
  return m_n;
}

//virtualで定義してても、実態としてここでも関数定義が必要
bool Stream::Set ()  {
  cout << "Stream::Set called" << endl;
  m_n = -1;
  return false;
}
