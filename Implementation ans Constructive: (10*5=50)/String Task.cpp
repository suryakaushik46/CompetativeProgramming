#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin>>s;
  string ans="";
  for(int i=0;i<s.size();i++){ 
    s[i]=tolower(s[i]);
    if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')){
       ans+=".";
       ans+=s[i];
    }
  }
  cout<<ans<<endl;
  return 0;
}