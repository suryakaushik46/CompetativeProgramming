#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
     string a,b;
     cin>>a>>b;
     int arr[26]={0};
     for(int i=0;i<a.size();i++){
       arr[a[i]-'a']++;
     }
     int f=0;
     for(int i=0;i<=b.size()-a.size();i++){
        int arr1[26]={0};
        for(int j=i;j<i+a.size();j++){
           arr1[b[j]-'a']++;
        }
        bool flag=false;
        for(int j=0;j<26;j++){
           if(arr[j]!=arr1[j]){
             flag=true;
             break;
           }
           arr1[j]=0;
        }
       if(!flag){
          f=1;
          cout<<"YES"<<endl;
          break;
       }
     }
    if(f==0){
      cout<<"NO"<<endl;
    }
  }
  return 0;
}