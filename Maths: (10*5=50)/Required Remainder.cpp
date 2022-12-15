#include <bits/stdc++.h>
using namespace std;
void solve() {
  int x, y, n;
  cin >> x >> y >> n;
  int z = n / x;
  while (z >= 0 && !(((z * x + y) % x) == y && z * x + y <= n)) {
    z--;
  }
  cout << z * x + y << endl;
}
int main() {
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