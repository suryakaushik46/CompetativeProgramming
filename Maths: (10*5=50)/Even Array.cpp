#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t = 1;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x & 1 && i & 1)
        arr[i] = 0;
      else if (!(x & 1) && !(i & 1)) {
        arr[i] = 0;
      } else
        arr[i] = 1, count++;
    }
    if (count & 1) {
      cout << -1 << endl;
    } else {
      cout << count / 2 << endl;
    }
  }
  return 0;
}