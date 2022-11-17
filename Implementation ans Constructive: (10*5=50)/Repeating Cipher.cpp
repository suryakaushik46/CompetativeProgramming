#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  string s;
  cin>>s;
  int i=0;
  int j=1;
  string ans="";
  while(i<s.size()){
    ans+=s[i];
    i+=j;
    j++;
  }
  cout<<ans<<endl;
  return 0;
}