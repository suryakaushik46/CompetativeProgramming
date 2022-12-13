#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t = 1;
  cin >> t;
  while (t--) {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int maxi = max(max(a, b), c);
    x -= maxi - a;
    x -= maxi - b;
    x -= maxi - c;
    if (x>=0 && x % 3 == 0) 
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}