#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
   long long  a,b,c;
   cin>>a>>b>>c;
   if(a>=c){
     cout<<-1<<" ";
   }else{
     cout<<1<<" ";
   }
   if(b*a <= c){
    cout<<-1<<" ";
   }else{
     cout<<b<<" ";
   }
   cout<<endl;
   }
   return 0;
}