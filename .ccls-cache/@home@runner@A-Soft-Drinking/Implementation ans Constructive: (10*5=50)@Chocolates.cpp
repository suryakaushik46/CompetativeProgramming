#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  int ans=0;
  int prev=INT_MAX;
  for(int i=n-1;i>=0;i--){
    if(arr[i]>prev && prev!=0){
      ans+=prev-1;
      prev=prev-1;
    }else if(prev==0){
      break;
    }else{
       ans+=arr[i];
    }
  }
  cout<<ans<<endl;
  return 0;
}