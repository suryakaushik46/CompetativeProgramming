#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,k;
   cin>>n>>k;
   vector<pair<int,int>> p;
   int a;
   for(int i=0;i<n;i++){
      cin>>a;
      p.push_back({a,i+1});
   }
   sort(p.begin(),p.end());
   int i=0;
   vector<int> ans;
   while(k>0 && i<n && arr[i]>=k){
      k-=p[i].first;
      ans.push_back(p[i].second);
      i++;
   }
   cout<<i<<endl;
   for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
   }
   
   return 0;
}