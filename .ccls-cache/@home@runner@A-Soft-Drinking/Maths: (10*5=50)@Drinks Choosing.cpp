#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
  int n, k;
  cin >> n >> k;
  int sets = n / 2;
  if (n & 1)
    sets++;
  int arr[k + 1] = {0};
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[x]++;
  }
  int ans = 0;
  int count = 0;
  for (int i = 0; i < k + 1; i++) {
    if (arr[i] > 1) {
      int x = arr[i] / 2;
      ans += (x * 2);
      sets -= x;
      if (arr[i] & 1)
        count++;
    } else if (arr[i] == 1)
      count++;
  }
  if (sets > 0) {
    ans += count > sets ? sets : count;
  }
  cout << ans << endl;
}
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t = 1;
  while (t--) {
    solve();
  }
  return 0;
}