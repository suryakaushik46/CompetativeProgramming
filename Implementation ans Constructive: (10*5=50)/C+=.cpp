#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
      int a,b,n;
      cin>>a>>b>>n;
      int c=0;
      while(a<=n&&b<=n){
         if(a>b){
            b=b+a;
         }else{
            a=a+b;
         }
        c++;
      }
     cout<<c<<endl;
   }
   return 0;
}