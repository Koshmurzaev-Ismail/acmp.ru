#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, r;
  cin >> n >> m;
  r = (n + 1) * m + (m + 1) * n + n + m;
  if (n * m % 2 == 1 || m == 1 or n == 1)
    r -= 2;
  cout << r;
  return 0;
}