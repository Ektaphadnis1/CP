#include <iostream>
using namespace std;
int main(){
  string s;
  cin>>s;
  int freq[256]={0};
  for(int i=0;i<s.length();i++){
      if(freq[s[i]]>1){
          cout<<s[i];
          return 0;
      }
  }
  cout<<-1;
  return 0;
}
  
