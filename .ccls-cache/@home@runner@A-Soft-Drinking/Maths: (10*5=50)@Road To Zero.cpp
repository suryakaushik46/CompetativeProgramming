#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int a,b,x,y;
  cin>>a>>b>>x>>y;
  if(2*x<y){
    cout<<(a+b)*x<<endl;
  }else{
    cout<<min(a,b)*y+(max(a,b)-min(a,b))*x<<endl;
  }
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