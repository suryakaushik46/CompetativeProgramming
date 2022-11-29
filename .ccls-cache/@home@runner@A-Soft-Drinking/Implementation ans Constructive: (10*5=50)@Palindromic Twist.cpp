#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     string a;
     cin>>a;
     int i=0;
     int j=n-1;
     while(i<j){
        if((s[i]-'a')+1 == (s[j]-'a')+1 || (s[i]-'a')+1 == (s[j]-'a')-1 || (s[i]-'a')-1 == (s[j]-'a')+1 || (s[i]-'a')-1 == (s[j]-'a')-1){
           i++;
           j--;
        }else{
           cout<<"NO"<<endl;
           continue;
        }
     }
     cout<<"YES"<<endl;
     
   }
   return 0;
}