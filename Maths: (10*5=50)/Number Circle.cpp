#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  if (arr[n - 1] >= arr[n - 2] + arr[n - 3]) {
    cout << "NO" << endl;
    return;
  }
  for (int i = 0; i < n; i++) {
    cout << "YES" << endl;
    for (int i = 0; i < n - 2; i++) {
      cout << arr[i] << " ";
    }
    cout<<arr[n-1]<<" "<<arr[n-2]<<endl;
  }
}
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t = 1;
  // cin>>t;
  while (t--) {
    solve();
  }
  return 0;
}
