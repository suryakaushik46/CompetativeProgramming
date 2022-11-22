#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,t;
   cin>>n>>t;
   int arr[n];
   for(int i=0;i<n-1;i++){
    cin>>arr[i];
   }
   int i=0;
 
   while(i<n){
     if(t==i+1){
        cout<<"YES"<<endl;
        return 0;
     }
     i=i+arr[i];
    
   }
   cout<<"NO"<<endl;
   return 0;
}