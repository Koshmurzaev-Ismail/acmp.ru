#include <bits/stdc++.h>
using namespace std;
int main() {
  int x1, y1, x2, y2, c1, c2;
  cin >> x1 >> y1 >> x2 >> y2;
  c1 = x2 - x1;
  c2 = y2 - y1;
  double s = sqrt(c1 * c1 + c2 * c2);
  cout << setprecision(5) << fixed << s;
  return 0;
}