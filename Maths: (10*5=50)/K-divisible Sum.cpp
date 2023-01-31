#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int a,b;
  cin>>a>>b;
  if(a<=b){
    cout<<ceil(b/a)<<endl;
  }else{
    int x=ceil(a/b);
    int c=b*x;
    cout<<ceil(x/a)<<endl;
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