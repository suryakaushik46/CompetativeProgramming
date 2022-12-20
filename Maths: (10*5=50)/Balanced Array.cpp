#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a=n/2;
    if(a%2==0){
      cout<<"YES"<<endl;
      int x=2;
      int sum=0;
      for(int i=0;i<n/2;i++){
        cout<<x<<" ";
        sum+=x;
        x+=2;
        
      }
      x=1;
      for(int i=0;i<n/2-1;i++){
        cout<<x<<" ";
        sum-=x;
        x+=2;
      }
      cout<<sum<<endl;
      
    }else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}