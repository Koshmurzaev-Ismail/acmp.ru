#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, v, s, r = -1, mx = 0;
  cin >> n;
  for (int i = 0; i < n; i ++) {
    cin >> v >> s;
    if (s == 1 && v > mx) {
      r = i + 1;
      mx = v;
    }
  }
  cout << r;
  return 0;
}