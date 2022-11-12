#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int c=1;
   int ans=0;
   for(int i=1;i<n;i++){
      if(arr[i]>arr[i-1]){
        c++;
      }else{
         ans=max(ans,c);
         c=1;
    }
      
   }
   ans=max(ans,c);
  cout<<ans<<endl;
   return 0;
}