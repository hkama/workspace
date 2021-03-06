
#include "InputStream.h"
#include "ArrayStream.h"
#include <iostream>
using namespace std;

bool Average(Stream &stream) {
  int count;
  double avr = 0;

  for (count = 0; stream.Set(); ++count) {
    avr += stream.Get();
  }
  if (count == 0) {
    return false;
  }

  avr /= count;
  cout << "avr: " << avr << endl;
  return true;
}

int main () {
  cout << "Enter-> 3 1 -1" << endl;
  InputStream istream;
  Average(istream);

  static const double ARRAY[] = {0.5, 1.5, -1};
  ArrayStream astream(ARRAY);
  Average(astream);

  Stream stream;
  Average(stream);
}

  
