#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin>>n;
   int ans=0;
   int c=0;
   while(n>0){
      c++;
      n=n-(c*(c+1))/2;
   }
   if(n==0)cout<<c<<endl;
  cout<<c-1<<endl;
   return 0;
}