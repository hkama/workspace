
#include "IntArray.h"

Hoge::Hoge (int size) {
  m_size = size;
  m_array = new int[size];
}

Hoge::~Hoge () {
  delete [] m_array;
}

Hoge::Hoge (const Hoge &hoge) {
  m_size = hoge.m_size;
  m_array = new int[hoge.m_size];
}

int Hoge::Size () {
  return m_size;
}

