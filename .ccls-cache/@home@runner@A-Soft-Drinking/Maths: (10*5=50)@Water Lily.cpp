#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  double h,l;
  cin>>h>>l;
  cout<<fixed<<setprecision(13)<<(l*l-h*h)/(2*h)<<endl;
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