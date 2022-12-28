#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int w,h;
  cin>>w>>h;
  int k;
  cin>>k;
  vector<int> arr;
  int x;
  for(int i=0;i<k;i++){
    cin>>x;
    arr.push_back(x);
  }
  sort(arr.begin(),arr.end());
  int maxi1=abs(arr[0]-arr[arr.size()-1]);
  cin>>k;
  for(int i=0;i<k;i++){
    cin>>x;
    arr.push_back(x);
  }
  sort(arr.begin(),arr.end());
  int maxi2=abs(arr[0]-arr[arr.size()-1]);

  if(maxi1==maxi2){
     cout<<max(maxi1*h,maxi2*w)<<endl;
  }else if(maxi1>maxi2){
    cout<<maxi1*h<<endl;
  }else{
    cout<<maxi2*w<<endl;
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