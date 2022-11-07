#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int maxiInd=-1;
    int miniInd=-1;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            maxiInd=i;
        }
        if(mini>=arr[i]){
            mini=arr[i];
            miniInd=i;
        }
    }
    int ans=0;
    if(maxiInd>miniInd){
        ans=maxiInd-miniInd;
        maxiInd=miniInd+(maxiInd-miniInd)/2;
        miniInd=maxiInd+1;
    }
    ans+=maxiInd;
    ans+=n-1-miniInd;
    cout<<ans<<endl;
    return 0;
}
