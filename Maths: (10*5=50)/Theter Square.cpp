#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int n,m,a;
      cin>>n>>m>>a;
        int x=n/a,y=m/a;
        if(n%a)x++;
        if(m%a)y++;
        cout<<x*y<<endl;
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

