

// Given two strings s and goal, return true if you can swap two letters in s so
// the result is equal to goal, otherwise, return false.

// Swapping letters is defined as taking two indices i and j (0-indexed) such
// that i != j and swapping the characters at s[i] and s[j].

// For example, swapping at indices 0 and 2 in "abcd" results in "cbad".

// Input: s = "ab", goal = "ba"
// Output: true

#include <bits/stdc++.h>
using namespace std;

bool solution(string a, string b) {
  // write the solution here..
  if (a.size() != b.size()) {
    return false;
  }
  int count = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
      count++;
    }
  }
  if (count != 2)
    return false;
  return true;
}

int main() {
  string a = "ab";
  string b = "ab";
  if (solution(a, b)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
}