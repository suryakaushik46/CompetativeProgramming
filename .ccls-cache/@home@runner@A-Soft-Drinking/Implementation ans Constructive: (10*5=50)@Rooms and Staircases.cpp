#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
      int n;
      string a;
      cin>>n>>a;
      int l=0;
      int h=n-1;
      
      while(l<n && a[l]=='0'){
         l++;
      }
      if(l==n){
         cout<<n<<endl;
         continue;
      }
      while(h>=0 && a[h]=='0'){
         h--;
      }
      int ans=INT_MIN;
         ans=max(l+1,n-h);
         ans=ans*2;
      cout<<ans<<endl;
     
   }
   return 0;
}