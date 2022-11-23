#include <bits/stdc++.h>
using namespace std;
int main() {
  int a1, a2, a3, b1, b2, b3;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
  int c1 = max(a1 * b1 + a2 * b2 + a3 * b3, a1 * b1 + a2 * b3 + a3 * b2);
  int c2 = max(a1 * b2 + a2 * b1 + a3 * b3, a1 * b2 + a2 * b3 + a3 * b1);
  int c3 = max(a1 * b3 + a2 * b1 + a3 * b2, a1 * b3 + a2 * b2 + a3 * b1);
  cout << max(max(c1, c2), c3);
    return 0;
}