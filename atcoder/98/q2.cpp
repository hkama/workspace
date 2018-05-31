#include <iostream>
#include <string>
using namespace std;

int main(){
  int l[26] = {0}, r[26] = {0};
  int n, ret=0;
  string str;
  cin >> n >> str;
  for(int i=0; i<n; i++){
    r[str[i]-'a']++;
  }
  for(int i=0; i<n; i++){
    l[str[i]-'a']++;
    r[str[i]-'a']--;
    int c=0;
    for(int j=0; j<26; j++){
      if(l[j]*r[j]>0)c++;
    }
    ret = (ret<c) ? c : ret;
  }
  cout << ret;
  return 0;
}
