#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  int ans=(n*(n+1))/2;
  for(int i=2;i<=n-2;i++){
    ans+=(n-i)*(i-1);
  }
  cout<<ans<<endl;
  return 0;
}
