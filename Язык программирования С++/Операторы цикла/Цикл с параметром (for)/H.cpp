#include <bits/stdc++.h>
using namespace std;
int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  if ((x1 + y1 + x2 + y2) % 2 == 0)
    cout << "YES";
  else cout << "NO";
  return 0;
}