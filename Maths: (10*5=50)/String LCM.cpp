#include<bits/stdc++.h>
#define int long long
using namespace std;
// void solve(){
//   string s,t;
//   cin>>s>>t;
//   string a=s+t;
//   string temp="";
//   bool flag=false;
//   for(int i=0;i<min(s.size(),t.size());i++){
//      temp+=a[i];
//      string res="";
//      for(int j=0;j<a.size();j+=temp.size() ){
//        res+=temp;
//      }
//      if(res==a){
//         flag=true;
//         break;
//      }
//   }   
//   if(!flag){
//     cout<<-1<<endl;
//     return;
//   }
//   int z=temp.size();
//   int x=s.size()/temp.size();
//   int y=t.size()/temp.size();
//   if(x==y){
      
//       string ans="";
//       for(int i=0;i<x;i++){
//         ans+=temp; 
//       } 
//       cout<<ans<<endl;
//       return;
//   }
//   string ans="";
//   for(int i=0;i<x*y;i++){
//      ans+=temp; 
//   } 
//   cout<<ans<<endl;
// }  THINK WISER SK LONG CODES DONEST MAKE SENSE THAT YOU ARE DOING GREAT
void solve(){
  string s,t;
  cin>>s>>t;
  int n1=s.size();
  int n2=t.size();
   int lcm=(n1*n2)/__gcd(n1,n2);
  string r1="",r2="";
  for(int i=0;i<lcm/n1;i++)r1+=s;
  for(int i=0;i<lcm/n2;i++)r2+=t;
  if(r1==r2){
    cout<<r1<<endl;
  }else{
    cout<<-1<<endl;
  }
  
  
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