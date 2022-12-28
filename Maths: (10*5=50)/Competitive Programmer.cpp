#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
  string n;
  cin >> n;
  if (n.size() == 1 && n[0] == 0) {
    cout << "red" << endl;
    return;
  }
  int sum = 0;
  bool even = false;
  int c = 0;
  for (int i = 0; i < n.size(); i++) {

    if ((n[i] - '0') != 0 || c >= 1) {
      if ((n[i] - '0') % 2 == 0)
        even = true;
    } else if ((n[i] - '0') == 0) {
      c++;
      if (c > 1) {
        even = true;
      }
    }
    sum += n[i] - '0';
  }
  if (c >= 1 && sum % 3 == 0 && even) {
    cout << "red" << endl;
  } else {
    cout << "cyan" << endl;
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