#include <bits/stdc++.h>
using namespace std;
int main() {
  int x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
  if ((r1 - r2) * (r1 - r2) <= (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)  && (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) <= (r1 + r2) * (r1 + r2))
    cout << "YES";
  else
    cout << "NO";
  return 0;
}