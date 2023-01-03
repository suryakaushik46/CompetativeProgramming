#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int a,b,s;
  cin>>a>>b>>s;
  s=s-(abs(a)+abs(b));
  if(s<0||s&1){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
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