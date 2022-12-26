#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int a,b;
  cin>>a>>b;
  int mini=min(a,b);
  int x=b/a;
  int y=b%a;
  cout<<(x*x*(mini-y)+(x+1)*(x+1)*y)<<endl;
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