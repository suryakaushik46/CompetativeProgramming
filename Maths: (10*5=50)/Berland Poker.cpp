#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
   int n,m,k;
   cin>>n>>m>>k;
   int x=n/k;
    if(m> x+(x-1)*(k-1)){
      cout<<0<<endl;
      return;
    }
   if(x>=m){
      cout<<m<<endl;
      return;
   }
   for(int i=0;i<=x;i++){
      int ans=(k-1)*i;
      if(ans>=m-x){
        cout<<(x-i)<<endl;
        return;
      }
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