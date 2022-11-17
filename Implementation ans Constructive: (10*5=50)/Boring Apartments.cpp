#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  while(t--){
     int n;
     cin>>n;
     int d=log10(n)+1;
     int x=n%10;
     int ans=10*(x-1)+(d*(d+1))/2;
     cout<<ans<<endl;
  }
  return 0;
}