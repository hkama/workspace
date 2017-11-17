
#include "copy1b.h"
#include <iostream>

using namespace std;

Hoge::Hoge(int size) {
m_size = size;
m_array = new int[size];
}

Hoge::~Hoge() {
delete [] m_array;
}

void Hoge::Show () {
cout << m_size << endl;
}


