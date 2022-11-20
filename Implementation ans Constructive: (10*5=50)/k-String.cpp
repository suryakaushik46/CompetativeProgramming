#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int arr[26];
  for(int i=0;i<26;i++){
    arr[i]=0;
  }
  for(int i=0;i<s.size();i++){
    arr[s[i]-'a']++;
  }
 
  string ans="";
  int y=s.size()/n;
  for(int i=0;i<26;i++){
     if(arr[i]%n!=0){
        cout<<-1<<endl;
        return 0;
     }else{
        int x=arr[i]/n;
        for(int j=0;j<x;j++){
          ans+=('a'+i);
        }
     }
  }
  string a;
  
  for(int i=0;i<n;i++){
      a+=ans;
  }
  cout<<a<<endl;
  
  
  return 0;
}