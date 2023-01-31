#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int n;
  cin>>n;
  string ans="";
  while(n>=10){
    int q=n/10;
    ans+=(q-'0');
    n=n%10;
  }
  ans+=(n-'0');
  string s=ans;
  reverse(ans.begin(),ans.end());
  cout<<s+ans<<endl;
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