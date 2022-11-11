#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   unordered_set<char> s;
   string str;
   cin>>str;
   for(int i=0;i<str.size();i++){
      s.insert(str[i]);
   }
   if(s.size()&1){
     cout<<"IGNORE HIM!"<<endl;
   }else{
     cout<<"CHAT WITH HER!"<<endl;
   }
  return 0;
}