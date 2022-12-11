#include <bits/stdc++.h>
using namespace std;
int main() {
  int x1, y1, x2, y2, xa, ya;
  cin >> x1 >> y1 >> x2 >> y2 >> xa >> ya;
  if (y1 == y2)
    cout << xa << " " << 2 * y1 - ya;
  if (x1 == x2)
    cout << 2 * x1 - xa << " " << ya;
  return 0;
}