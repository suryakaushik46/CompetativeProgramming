#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin>>n;
   string ans="";
   while(n>0 && n%7!==0){
     n=n-4;
    ans+="4";
    }
   while(n>0 && n%7==0){
      ans+="7";
     n-=7;
   }
  if(n==0){
     cout<<ans<<endl;
  }else{
     cout<<-1<<endl;
  }
     
   
   return 0;
}