#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,x,y;
   cin>>n>>x>>y;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   set<int> s;
   int i=0;
   int left[n];
   int right[n];
   while(i<n){
      if(s.size()==x+1){
         s.erase(s.find(arr[i-(x+1)]));
      }
      s.insert(arr[i]);
      left[i]=*(s.begin());
      i++;
  }
  s.clear();
  i=n;
  while(i>=0){
    if(s.size()==y+1){
         s.erase(s.find(arr[i+y+1]));
      }
      s.insert(arr[i]);
      right[i]=*(s.begin());
      i--;
  }
  for(int i=0;i<n;i++){
     if(left[i]==right[i]){
        cout<<i+1<<endl;
        return 0;
     }
  }
   return 0;
}