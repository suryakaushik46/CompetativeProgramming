#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  if(n==1||n==2){
    cout<<0<<endl;
  }
  cout<<n/2<<endl;
  
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