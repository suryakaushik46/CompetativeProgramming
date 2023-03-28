#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  int b[n];
  int maxi=-1;
  int high=0,low=0;
  for(int i=0;i<n;i++){
     cin>>b[i];
     maxi=max(maxi,b[i]+k);
     high=max(high,maxi/a[i]);
  }
  cout<<low<<" "<<high<<endl;
  int ans=0;
  int K=k;
  while(low<=high){
    int mid=(low+high)/2;
    k=K;
    for(int i=0;i<n;i++){
       int x=mid*a[i];
       if(b[i]<x){
           k=k-(a[i]-b[i]);
       }
    }
    if(k>=0){
      ans=max(ans,mid);
      low=mid+1;
    }else{
      high=mid-1;
    }
  }
  cout<<ans<<endl;
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  //cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
