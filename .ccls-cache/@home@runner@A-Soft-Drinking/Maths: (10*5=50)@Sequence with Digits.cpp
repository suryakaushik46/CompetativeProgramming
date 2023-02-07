#include<bits/stdc++.h>
#define int long long
using namespace std;
int helper(int n){
  int maxi=LONG_MIN;
  int mini=LONG_MAX;
  while(n>0){
    int r=n%10;
    maxi=max(maxi,r);
    mini=min(mi,r);
  }
  return maxi*mini;
}
void solve(){
  int n,k;
  cin>>n>>k;
  int next;
  while(k--){
     next=n+helper(n);
     if(next==n){
       break;
     }
  }
  cout<<next<<endl;
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