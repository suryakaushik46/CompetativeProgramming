#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin>>n;
   int m=(2*n+1)/2;
   int count=0;
   for(int i=0;i<m;i++){
      for(int j=0;j<m-i;j++){
         cout<<" ";
      }
      int x=2*count+1;
      int c=0;
      for(int j=m-i;j<x/2;;j++){
         c++;
      }
      
   }
   return 0;
}