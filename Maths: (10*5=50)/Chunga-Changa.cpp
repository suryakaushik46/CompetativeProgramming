#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  int maxi=(a+b)/c;
  int s=a/c;
  int r=b/c;
  if(s+r==maxi){
    cout<<maxi<<" "<<0<<endl;
    return;
  }
  cout<<maxi<<" "<<min(c-a%c,c-b%c);
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
