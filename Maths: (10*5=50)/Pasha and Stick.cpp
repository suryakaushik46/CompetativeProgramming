#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int n;
  cin>>n;
  if(n&1){
    cout<<0<<endl;
    return;
  }
  int x=n/2;
  if(x&1)cout<<x/2<<endl;
  else cout<<(x/2)-1<<endl;
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