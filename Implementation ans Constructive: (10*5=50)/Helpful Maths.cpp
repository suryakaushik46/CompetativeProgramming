#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   string a;
   cin>>a;
   int o=0;
   int t=0;
   int th=0;
   for(int i=0;i<a.size();i++){
      if(a[i]=='1'){
         o++;
      }else if(a[i]=='2'){
         t++;
      }else if(a[i]=='3'){
         th++;
      }
   }
   string ans="";
   while(o--){
      ans+="1+";
   }
   while(t--){
     ans+="2+";
   }
   while(th--){
      ans+="3+";
   }
   ans.pop_back();
   cout<<ans<<endl;
   return 0;
}