// #include<bits/stdc++.h>
// #define int long long
// using namespace std;
// void solve(){
//   string s;
//   cin>>s;
//   int nb,ns,nc;
//   cin>>nb>>ns>>nc;
//   int pb,ps,pc;
//   cin>>pb>>ps>>pc;
//   int rub;
//   cin>>rub;
//   int cb=0,cs=0,cc=0;
//   for(int i=0;i<s.size();i++){
//     if(s[i]=='B'){
//       cb++;
//     }else if(s[i]=='S'){
//       cs++;
//     }else{
//       cc++;
//     }
//   }
//   int ab=0,as=0,ac=0;
//   if(cb>0)
//   ab=nb/cb;
//   if(cs>0)
//   as=ns/cs;
//   if(cc>0)
//   ac=nc/cc;
//   int x= max(max(ac,as),ab);
//   nb=nb-cb*x;
//   ns=ns-cs*x;
//   nc=nc-cc*x;
//  //cout<<nb<<" "<<ns<<" "<<nc<<endl;
//   if(nb<0&& rub>0){
//     rub-=(0-nb)*pb;
//     nb=0;
//   }
//   if(ns<0&&rub>0){
//     rub-=(0-ns)*ps;
//     ns=0;
//   }
//   if(nc<0 && rub>0){
//     rub-=(0-nc)*pc;
//     nc=0;
//   }
//   if(rub<0){
//     cout<<0<<endl;
//     return;
//   }
//   //cout<<nb<<" "<<ns<<" "<<nc<<" "<<rub<<endl;
  
//   int cx=0;
//   if(cb>0){
//    cx+=cb*pb-nb;
//   }
//   if(cs>0){
//     cx+=cs*ps-ns;
//    }
//    if(cc>0){
//       cx+=cc*pc-nc;
//    }
//  //cout<<cx<<endl;
//   int ans=rub/cx;
//   cout<<ans+x<<endl;
// }
// int32_t main(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(nullptr);
//   cout.tie(nullptr);
//   int t=1;
//   //cin>>t;
//   while(t--){
//     solve();
//   }
//   return 0;
// }


// tried like this but lot of cases I missed so thinking again


#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
  string s;
  cin>>s;
  int nb,ns,nc;
  cin>>nb>>ns>>nc;
  int pb,ps,pc;
  cin>>pb>>ps>>pc;
  int rub;
  cin>>rub;
  int cb=0,cs=0,cc=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='B'){
      cb++;
    }else if(s[i]=='S'){
      cs++;
    }else{
      cc++;
    }
  }
  int maxb=0,maxs=0,maxc=0;
  maxb=nb+rub/pb;
  maxs=ns+rub/ps;
  maxc=nc+rub/pc;
  cout<<maxb<<" "<<maxs<<" "<<maxc<<endl;
 int high=0;
  if(cb>0){
    high=max(maxb/cb,high);
  }
  if(cs>0){
    high=max(maxs/cs,high);
  }
  if(cc>0){
    high=max(maxc/cc,high);
  }
  int low=0;
  int ans=0;
  while(low<high){
     int mid=(low+high)/2;
     cout<<mid<<" mid"<<endl;
     int xb=cb*mid;
     int xs=cs*mid;
     int xc=cc*mid;
     cout<<xb<<" "<<xs<<" "<<xc<<endl;
     bool flag=true;
     if(nb<xb&&rub>0){
       xb=xb-nb;
       rub-=pb*xb;
     }
     if(ns<xs&&rub>0){
       xs=xs-ns;
       rub-=ps*xs;
     }
     if(nc<xc&&rub>0){
       xc=xc-nc;
       rub-=pc*xc;
     }
     if(rub<0){
        high=mid-1;
     }else{
        ans=mid;
        low=mid+1;
     }

  }
  cout<<ans<<endl;
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}