#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int n;
  cin>>n;
 int ans=0;
  for(int i=1;i<=n;i++){
    ans+=6*i;
  }
  cout<<ans+1<<endl;
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