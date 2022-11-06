#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int c=0;
    for(int i=0;i<n;i++){
        if(i&1){
            c++;
        }
         for(int j=0;j<m;j++){
           if(i&1){
             if(c&1){
               if(j==m-1){
                 cout<<"#";
               }else{
                 cout<<".";
               }
             }else{
               if(j==0){
                 cout<<"#";
               }else{
                 cout<<".";
               }
             }
           }else{
             
             cout<<"#";
           }
         }
         cout<<endl;
    }
    return 0;  
}