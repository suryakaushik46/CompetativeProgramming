#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,k;
  cin>>n>>k;
  int sum=0;
  int r=0;
  while(n>0&&k>0){
    r=n%10;
    
    if(k<=r){
      cout<<n-k<<endl;
      return 0;
    }
    k=k-(r+1);
    n=n/10;
    sum=sum+r; 
  }
  
    cout<<n<<endl;

  return 0;
}