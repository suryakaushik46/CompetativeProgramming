#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
     int n,m;
     cin>>n>>m;
     string a;
      int ans=0;
      for(int i=0;i<n;i++){
         cin>>a;
         if(i!=n-1){
           if(a[m-1]=='R'){
             ans++;
           }
         }else{
            for(int j=0;j<m;j++){
              if(a[j]=='D'){
                ans++;
              }
            }
         }
      }
    cout<<ans<<endl;
   }
   return 0;
}