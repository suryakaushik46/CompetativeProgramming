#include<bits/stdc++.h>
using namespace std;
void solve(){
  int a;
  cin>>a;
  if(a<=5){
    cout<<1<<endl;
    return;
  }
  int x=a/5;
  if(a%5==0){
    cout<<x<<endl;
  }else{
    cout<<x+1<<endl;
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  while(t--){
    solve();
  }
  return 0;
}