#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int j, k, l, m;
  cin >> j >> k >> l >> m;
  int maxi = max(j, max(k, max(l, m)));
  int arr[4];
  arr[0]=maxi-j;
  arr[1]=maxi-k;
  arr[2]=maxi-l;
  arr[3]=maxi-m;
   for(int i=0;i<4;i++){
      if(arr[i]!=0){
        cout<<arr[i]<<" ";
      }
   }
  cout<<endl;
  return 0;
}