#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y && y >= z) {
      cout << "YES" << endl;
      cout << x << " " << z << " " << z - 1 << endl;
    } else if (y == z && y >= x) {
      cout << "YES" << endl;
      cout << y << " " << x << " " << x - 1 << endl;
    } else if (x == z && x >= y) {
      cout << "YES" << endl;
      cout << y << " " << z << " " << y - 1 << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}