#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
     int n,x;
     cin>>n>>x;
     if(n==1||n==2){
        cout<<1<<endl;
        continue;
     }
     n=n-2;
     int extra=1;
    if(n%x){
      extra+=1;
    }
    int ans=n/x+extra;
     cout<<ans<<endl;
   }
   return 0;
}