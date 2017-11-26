
#include "ArrayStream.h"
#include <iostream>
using namespace std;

ArrayStream::ArrayStream(const double* array) {
  m_array = array;
  m_i = 0;
}

bool ArrayStream::Set () {
  cout << "ArrayStream::Set called" << endl;
  m_n = m_array[m_i];
  if (m_n > 0){
    ++m_i;
    return true;
  }
  else {
    return false;
  }
}
