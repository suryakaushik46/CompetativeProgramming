#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
  int x, y;
  cin >> x >> y;
  unordered_set<int> s;
  while (x > 0 && x < y && s.find(x) == s.end()) {
    s.insert(x);
    if (x & 1)
      x = x - 1;
    else
      x = (x * 3) / 2;
  }
  if (x >= y) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}