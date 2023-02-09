



// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]



#include <bits/stdc++.h>  
using namespace std;  
  
void solution(vector<int> &num1,vector<int> &num2) {  
    // write the solution here.. 
    int n=num1.size();
    int m=num2.size();
    unordered_map<int,int> mp;
    bool flag=false;
    if(n<m){
      for(int i=0;i<n;i++){
         mp[num1[i]]++;
      }
      flag=true;
    }else{
       for(int i=0;i<m;i++){
         mp[num2[i]]++;
      } 
    }
    vector<int> ans;
    if(flag){
       for(int i=0;i<m;i++){
         if(mp.find(num2[i])!=mp.end() && mp[num2[i]]>0){
             mp[num2[i]]--;
             ans.push_back(num2[i]);
         }
       }
    }else{
      for(int i=0;i<n;i++){
         if(mp.find(num1[i])!=mp.end() && mp[num1[i]]>0){
             mp[num1[i]]--;
             ans.push_back(num1[i]);
         }
       }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}  
  
int main()  
{  
    vector<int> num1={4,9,5,9,};
    vector<int> num2={9,4,9,8,4};
    solution(num1,num2);
}