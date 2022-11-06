#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int c=0;
    string ans;
    int x=0;
    while(n>0){
       int r=n%10;
      if(r!=0){
         x++;
         ans=ans+to_string((int)(r*pow(10,c)))+" ";
      }
      n=n/10;
      c++;
    }
    cout<<x<<endl;
    cout<<ans<<endl;
  
  }
  
  return 0;
}