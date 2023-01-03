#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int arr[4];
  cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
  bool flag=false;
  while(arr[0]>0 && arr[1]>0 && arr[2]>0){
    int e=0;
    for(int i=0;i<4;i++){
      if((arr[i]&1)==0){
         e++;
      }
    }
    if(e>=3){
      flag=true;
      break;
    }
  }
  if(flag){
    cout<<"YES"<<endl;
  }else{
    int e=0;
    for(int i=0;i<4;i++){
      if((arr[i]&1)==0){
         e++;
      }
    }
    if(e>=3){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}