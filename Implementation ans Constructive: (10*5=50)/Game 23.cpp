#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,m;
   cin>>n>>m;
   if(m%n!=0){
      cout<<-1<<endl;
      return 0;
   }
   int x=m/n;
   int count=0;
   while(x>0 && x%2==0){
      x=x/2;
      count++;
   }
   while(x>0 && x%3==0){
      x=x/3;
      count++;
   }
   if(x!=1){
      cout<<-1<<endl;
      return 0;
   }
  cout<<count<<endl; 
  return 0;
}