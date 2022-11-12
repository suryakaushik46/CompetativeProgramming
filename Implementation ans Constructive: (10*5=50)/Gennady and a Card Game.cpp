#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin>>s;
  string arr[5];
  for(int i=0;i<5;i++){
     cin>>arr[i];
      if(arr[i][0]==s[0]||arr[i][1]==s[1]){
          ccout<<"YES"<<endl;
          return 0;
      }
  }
  cout<<"NO"<<endl;
  return 0;
}