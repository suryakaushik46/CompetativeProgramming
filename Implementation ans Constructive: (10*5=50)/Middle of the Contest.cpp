#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   string a,b;
   cin>>a>>b;
   int x=0,y=0;
   int x1=0,y1=0;
   int i=0;
   while(a[i]!=':'){
      x=x*10+(a[i]-'0');
      i++;
   }
   i++;
   while(i<a.size()){
      y=y*10+(a[i]-'0');
      i++;
   }
   i=0;
   while(b[i]!=':'){
      x1=x1*10+(b[i]-'0');
      i++;
   }
   i++;
   while(i<b.size()){
      y1=y1*10+(b[i]-'0');
      i++;
   }
   int r=0;
   int res=0;
   if((x1+x)%2==0){
      r=30;
      res=(x+x1)/2;
   }
   r+=(y1+y)/2;
   int rem=r%60;
   res+=r/60;
   cout<<res<<":"<<rem<<endl;
  
   return 0;
}