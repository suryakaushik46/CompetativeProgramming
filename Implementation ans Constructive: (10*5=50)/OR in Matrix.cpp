#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,m;
  cin>>n>>m;
  int row[n]={0};
  int col[m]={0};
  int arr[n][m];
  int arr1[n][m];
  for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        int x;
        cin>>x;
       arr1[i][j]=x;
        if(x==0){
           row[i]=1;
           col[j]=1;
        }
       arr[i][j]=1;
     }
  }
 
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       if(row[i]==1 ||col[j]==1){
          arr[i][j]=0;
       }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr1[i][j]==1){
        bool flag=true;
         for(int k=0;k<n;k++){
            if(arr[k][j]==1){
               flag=false;
               break;
            }
         }
         for(int k=0;k<m;k++){
            if(arr[i][k]==1){
               flag=false;
               break;
            }
         }
        if(flag){
           cout<<"NO"<<endl;
           return 0;
        }
      }
    }
  }
  cout<<"YES"<<endl;
  
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cout<<arr[i][j]<<' ';
      }
      cout<<endl;
  }
  return 0;
}