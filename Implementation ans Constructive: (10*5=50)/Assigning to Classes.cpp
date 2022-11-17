#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
  while(t--){
     int n;
     cin>>n;
     int arr[2*n];
     for(int i=0;i<2*n;i++){
        cin>>arr[i];
     }
     sort(arr,arr+2*n);
     int x=n;
     int ans=abs(arr[x]-arr[x-1]);
     cout<<ans<<endl;
    }
  return 0;
}