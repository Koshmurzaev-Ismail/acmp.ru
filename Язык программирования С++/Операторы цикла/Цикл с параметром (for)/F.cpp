#include <bits/stdc++.h>
using namespace std;
int main() {
  int s, p;
  cin >> s >> p;
  for (int x = 1; x <= s / 2; x ++) {
    if (x * (s - x) == p) {
      cout << x << " " << s - x;
      return 0;
    }
  }
  return 0;
}