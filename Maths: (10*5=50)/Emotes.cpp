#include <bits/stdc++.h>
#define int  long long int
using namespace std;
void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n, greater<int>());
  int x = arr[0] * k + arr[1];
  int y = m / (k+1);
  int ans = y * x;
  int z = m % (k+1);
  ans = ans + arr[0] * z;
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