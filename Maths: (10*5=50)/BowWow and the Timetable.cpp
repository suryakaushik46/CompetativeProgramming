#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  string s;
  cin>>s;
  bool flag=false;
   if(s.find('1',1)==string::npos){
     if(s.size()&1){
       cout<<(s.size()-1)/2<<endl;
     }else{
       cout<<(s.size())/2<<endl;
     }
   }else{
     if(s.size()&1){
       cout<<(s.size()-1)/2+1<<endl;
     }else{
       cout<<(s.size())/2<<endl;
     }
   }

}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  //cin>>t;
  while(t--){
    solve();
  }
  return 0;
}