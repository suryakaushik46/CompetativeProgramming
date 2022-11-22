#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,m;
   cin>>n>>m;
   if(n<m){
     cout<<-1<<endl;
     return 0;
   }
   int x=n/m;
   while(x%m!=0){
      x+=1
   }
  cout<<x<<endl;
   return 0;
}