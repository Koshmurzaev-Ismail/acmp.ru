#include <bits/stdc++.h>
using namespace std;
int main() {
  int k, m, n;
  cin >> k >> m >> n;
  if (n <= k) cout << 2 * m;
  else cout << ((2 * n + k - 1) / k) * m;
  return 0;
}