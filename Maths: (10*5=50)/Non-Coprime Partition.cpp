#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int n;
  cin>>n;
  if(n<3){
     cout<<"No"<<endl;
  }else{
    cout<<"Yes"<<endl;
    cout<<1<<" "<<n<<" "<<n-1<<" ";
    for(int i=2;i<n-2;i++){
        cout<<i<<" ";
    }
  }
  
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