#include<bits/stdc++.h>
using namespace std;
void solve(){
  int a,b;
  cin>>a>>b;
  int mini=min(a+a,min(a+b,b+b));
  mini=max(mini,max(a,b));
  cout<<mini*mini<<endl;
}
int main(){
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