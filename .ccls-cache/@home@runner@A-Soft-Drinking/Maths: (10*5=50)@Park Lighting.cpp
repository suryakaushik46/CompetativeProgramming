#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  cin>>t;
  while(t--){
     int n,m;
     cin>>n>>m;
     bool flag=false;
     if(n&1)flag=true,n--;
     int ans=n/2*m;
     if(flag && m&1) ans+=(m/2+1);
     else if(flag) ans+=m/2;
     cout<<ans<<endl;
  }
  return 0;
}