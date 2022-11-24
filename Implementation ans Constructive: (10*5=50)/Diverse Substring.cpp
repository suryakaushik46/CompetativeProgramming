#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin>>n;
   string s;
   cin>>s;
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
       int arr[26]={0};
       string ans="";
       for(int k=i;k<j;k++){
          arr[s[k]-'a']++;
          ans+=s[k];
       }
       bool flag=false;
       for(int k=0;k<26;k++){
          if(arr[k]>((j-i)+1))/2){
            flag=true;
            break;
          }
       }
       if(!flag){
          cout<<"YES"<endl;
          cout<<ans<<endl;
          return 0;
       }
     }
   }
   cout<<"NO"<<endl;
   return 0;
}