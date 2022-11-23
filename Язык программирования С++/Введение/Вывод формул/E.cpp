#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  m = 45 * n + n / 2 * 5 + (n - 1) / 2 * 15;
  cout << 9 + m / 60 << " " << m % 60;
  return 0;
}