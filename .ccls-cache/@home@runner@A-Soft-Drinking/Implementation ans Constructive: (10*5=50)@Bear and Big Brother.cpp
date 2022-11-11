#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
   int a,b;
   cin>>a>>b;
   double x=(log10(b)-log10(a))/(log10(3)-log10(2));
   int y=(int)x;
   cout<<y+1<<endl;
   return 0;
}