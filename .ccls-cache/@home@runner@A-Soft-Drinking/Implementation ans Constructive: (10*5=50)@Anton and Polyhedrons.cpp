#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>>n;
  unordered_map<string,int> m;
  m["Tetrahedron"]=4;
  m["Cube"]=6;
  m["Octahedron"]=8;
  m["Dodecahedron"]=12;
  m["Icosahedron"]=20;
  int ans=0;
  while(n--){
    string a;
    cin>>a;
    ans+=m[a];
  }
  cout<<ans<<endl;
  return 0;
}