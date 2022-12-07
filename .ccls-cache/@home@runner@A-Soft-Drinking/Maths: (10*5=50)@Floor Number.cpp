#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   while(t--){
     int n,x;
     cin>>n>>x;
     if(x==1||x==2){
        cout<<1<<endl;
        return 0;
     }
     n=n-2;
     int extra=1;
    if(n%x==0){
      extra+=1;
    }
    int ans=n/x+extra;
     cout<<ans<<endl;
   }
   return 0;
}