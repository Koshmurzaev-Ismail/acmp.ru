#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, mn = 30001, mx = 0;
  cin >> n;
  for (int i = 0; i < n; i ++) {
    cin >> a;
    if (a < mn) mn = a;
    if (a > mx) mx = a;
  }
  cout << mn << " " << mx;
  return 0;
}