#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
     string s;
     cin>>s;
     int i=0;
     while(i<s.size()&&s[i]=='0'){
        i++;
     }
     int j=s.size()-1;
    while(j>=0 && s[j]=='0'){
       j--;
    }
    int c=0;
    for(int k=i;k<=j;k++){
      if(s[k]=='0'){
        c++;
      }
    }
    cout<<c<<endl;
  }
  
  return 0;
}