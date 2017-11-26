

#include <iostream>
#include <string>

using namespace std;

int main() {
  while (true) {
    string line;

    cout << "input string" << flush;
    std::getline(cin, line);
    if(line == "quit") {
      break;
    }

    string::size_type pos = line.rfind("。");
    if(pos == string::npos) {
      line += "アルネ。";
    }else {
      line.insert(pos, "アルネ");
    }

    cout << line << endl;

  }
}       
    
