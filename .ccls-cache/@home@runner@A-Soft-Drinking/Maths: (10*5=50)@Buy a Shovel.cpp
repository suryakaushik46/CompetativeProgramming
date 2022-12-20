#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int x, y;
  cin >> x >> y;
  for (int i = 1; i <= 9; i++) {
    int a = ((x * i) % 10);
    if (a == y || a == 0) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}