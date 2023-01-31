#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int e = 0;
  if ((a & 1) == 0) {
    e++;
  }
  if ((b & 1) == 0) {
    e++;
  }
  if ((c & 1) == 0) {
    e++;
  }
  if ((d & 1) == 0) {
    e++;
  }
  if (a == 0 || b == 0 || c == 0) {
    if (e >= 3) {
      cout << "YES" << endl;
    } else {
      cout << "No" << endl;
    }
  } else {
    if (e != 2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
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