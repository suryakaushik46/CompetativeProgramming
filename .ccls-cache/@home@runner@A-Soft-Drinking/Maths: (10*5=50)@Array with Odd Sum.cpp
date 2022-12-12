#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  while(t--){
     int n;
     cin>>n;
     int o=0;
     int e=0;
     int x;
    for(int i=0;i<n;i++){
       cin>>x;
       if(x&1)o++;
       else e++;
    }
    if(o&1)cout<<"YES"<<endl;
    else if(e>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}