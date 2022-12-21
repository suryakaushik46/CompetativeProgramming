#include <bits/stdc++.h>
using namespace std;
void solve() {
  int a, b;
  cin >> a >> b;
  int x = a / b;
  if (a % b == 0) {
    cout << 0 << endl;
  } else {
    cout << (b * (x + 1) - a) << endl;
  }
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