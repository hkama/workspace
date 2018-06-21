#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  int e[n]={};
  int w[n]={};
  int max;
  string str;
  cin >> n >> str;
  cout << "fuga" << endl;
  cout << "hgoe"<< max << endl;
  for(int i=0; i<n; i++){
    if(str[i]=='E')
      e[i]=1;
    else
      w[i]=1;
  }
  max =0;
  int cnt =0;
  for(int i=0; i<n; i++){
    for(int j=0; j<i; j++) {
      cnt += e[j];
    }
    for(int j=n; j>i; j--) {
      cnt += w[j];
    }
    max = (max<cnt) ? cnt : max;
  }
  cout << "hgoe"<< max;
  return 0;
}
