#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin>>s;
  string ans="";
  bool flag=false;
  for(int i=1;i<s.size();i++){
    if(!(s[i]>='A' && s[i]<='Z')){
       flag=true;
       break;
    }
  }
  if(flag){
    ans+=toupper(s[0]);
    for(int i=1;i<s.size();i++){
       ans+=tolower(s[i]);
       return 0;
    }
  }
  cout<<s<<endl;
  return 0;
}