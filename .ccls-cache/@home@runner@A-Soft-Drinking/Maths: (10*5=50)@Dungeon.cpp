#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  if ((a+b+c)%9==0)
		{
			int d=(a+b+c)/9;
			if ((a>=d)&&(b>=d)&&(c>=d))
				 cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
				cout<<"NO"<<endl;
	
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