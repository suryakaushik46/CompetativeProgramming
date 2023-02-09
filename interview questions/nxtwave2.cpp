


// Given an integer array nums, return the length of the longest strictly increasing 
// subsequence


// Input: nums = [10,9,2,5,3,7,101,18]
 //                  1.1. 1.2 2 3 1. 1
                       
// Output: 4


#include <bits/stdc++.h>  
using namespace std;  
  
int solution(vector<int> arr) {  
    // write the solution here..
    int maxi=1;
    vector<int> res(arr.size(),1);
    for(int i=1;i<arr.size();i++){
        for(int j=i-1;j>=0;j--){
            if(arr[i]>arr[j]){
                res[i]=max(res[i],res[j]+1);
                maxi=max(res[i],maxi);
            }
        }
    } 
    return maxi;
}  
  
int main()  
{  
    vector<int> arr={10,9,2,5,3,7,101,18,103};
    cout<<solution(arr)<<endl;
}