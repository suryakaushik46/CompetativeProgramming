#include <bits/stdc++.h>
using namespace std;
long long cnt;
int main(){
	int k, w;
	long long n;
	cin >> k >> n >> w;
	cnt=(w*(w+1)/2)*k;
	if(cnt > n){
	    cout << cnt - n;
	}
	else{
	    cout << 0;
	}
 
}
