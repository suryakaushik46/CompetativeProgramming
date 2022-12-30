#include<bits/stdc++.h>
#define int long long
using namespace std;
int gx=0;
int gy=0;
int gz=0
void solve(){
  int x,y,z;
  cin>>x>>y>>z;
  gx+=x;
  gy+=y;
  gz+=z;
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
  if(gx==0 && gy==0 && gz==0)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}