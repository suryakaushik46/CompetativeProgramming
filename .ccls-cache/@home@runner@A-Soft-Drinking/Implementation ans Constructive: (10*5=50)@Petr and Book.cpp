#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[7];
  int sum=0;
  for(int i=0;i<7;i++){
     cin>>arr[i];
     sum+=arr[i];
  }
  int x=n%sum;
  int y=n/sum;
  int ans=0;
  int i=0;
  for(i=0;i<7;i++){
     if(x<=0){
        break;
     }else{
        y++;
        x-=arr[i];
     }
  }
  cout<<i+1<<endl;
  
  return 0;
}