#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x != 0) {
      cout << "HARD" << endl;
      return 0;
    }
  }
  cout << "EASY" << endl;
  return 0;
}