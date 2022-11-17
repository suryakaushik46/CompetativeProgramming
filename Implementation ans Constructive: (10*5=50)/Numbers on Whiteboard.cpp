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
      priority_queue<int> pq;
      for(int i=0;i<n;;i++){
         pq.push(i+1);
      }
      vector<pair<int,int>> p;
      while(pq.size()!=1){
         int x=pq.top();
         pq.pop();
         int y=pq.top();
         pq.pop();
         p.push_back({x,y});
         if((x+y)&1)pq.push((x+y+1)/2);
         else  pq.push((x+y)/2);
      }
      cout<<pq.top()<<endl;
      for(int i=0;i<p.size();i++){
         cout<<x<<" "<<y<<endl;
      }
    }
   return 0;
}