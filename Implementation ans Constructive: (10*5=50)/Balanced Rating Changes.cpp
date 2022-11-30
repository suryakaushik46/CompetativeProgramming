#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin>>n;
   int arr[n];
   vector<int> ans;
   int oddnev=0;
   int oddpos=0;
    int c=0;
   for(int i=0;i<n;i++){
       int a;
       cin>>a;
       if(a%2==1 ){
           c++;
        
         if(c&1){
           cout<<a/2<<endl;
         }
         else{
           cout<<(a/2)+1<<endl;
         }
      }else{
         cout<<a/2<<endl;
      }
      
   }
    
   return 0;
}