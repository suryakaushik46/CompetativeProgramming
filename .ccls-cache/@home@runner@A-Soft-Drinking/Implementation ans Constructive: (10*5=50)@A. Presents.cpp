#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  unordered_map<int,int> m;
  for(int i=0;i<n;i++){
    int u;
    cin>>u;
    m[u]=i+1;
  }
  for(int i=0;i<n;i++){
    cout<<m[i+1]<<" ";
  }
  cout<<endl;
  return 0;
}