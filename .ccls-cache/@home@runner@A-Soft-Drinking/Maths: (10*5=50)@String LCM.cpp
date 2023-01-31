#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  string s,t;
  cin>>s>>t;
  string a=s+t;
  string temp="";
  bool flag=false;
  for(int i=0;i<min(s.size(),t.size());i++){
     temp+=a[i];
     string res="";
     for(int j=0;j<a.size();j+=temp.size() ){
       res+=temp;
     }
     if(res==a){
        flag=true;
        break;
     }
  }
  if(!flag){
    cout<<-1<<endl;
    return;
  }
  int z=temp.size();
  int x=s.size()/temp.size();
  int y=t.size()/temp.size();
  if(x==y){
      
      string ans="";
      for(int i=0;i<x;i++){
        ans+=temp; 
      } 
      cout<<ans<<endl;
      return;
  }
  string ans="";
  for(int i=0;i<x*y;i++){
     ans+=temp; 
  } 
  cout<<ans<<endl;
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}