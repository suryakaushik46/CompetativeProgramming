#include<bits/stdc++.h>
using namespace std;
void solve(){
  int a,b;
  cin>>a>>b;
  int x=abs(a-b);
  int ans=x/10;
  if(x%10!=0){
    ans++;
  }
  cout<<ans<<endl;
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