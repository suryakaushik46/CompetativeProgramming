#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  int maxi=0;
  int ans=0;
  while(n--){
    int a,b;
    cin>>a>>b;
    ans=ans-a+b;
    maxi=max(maxi,ans);
  }
  cout<<maxi<<endl;
  return 0;
}