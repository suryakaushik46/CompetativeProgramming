#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int n;
  if(n>14 &&n%14>=1 && n%14<=6)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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
