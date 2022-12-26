#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int k,x;
  cin>>k>>x;
  cout<<9*k-(9-x)<<endl;
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
