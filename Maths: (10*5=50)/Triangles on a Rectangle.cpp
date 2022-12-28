#include <bits/stdc++.h>
#define int long long
using namespace std;
int maxi() {
  int k;
  cin >> k;
  int x, y;
  for (int i = 0; i < k; i++) {
    int z;
    cin >> z;
    if (i == 0)
      x = z;
    else if (i == k - 1)
      y = z;
  }

  return y - x;
}
void solve() {
  int w, h;
  cin >> w >> h;
  int x1 = maxi() * h;
  int x2 = maxi() * h;
  int y1 = maxi() * w;
  int y2 = maxi() * w;
  int maxi1 = max(x1, x2);
  int maxi2 = max(y1, y2);
  cout << max(maxi1, maxi2) << endl;
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