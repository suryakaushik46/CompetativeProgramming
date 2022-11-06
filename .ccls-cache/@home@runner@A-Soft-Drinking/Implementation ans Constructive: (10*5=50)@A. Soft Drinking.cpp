#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int x=(k*l)/nl;
  int y=c*d;
  int ans=min(x,y);
  ans=min(ans,p/np);
  cout<<ans/n<<endl
  return 0;
}