#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a != 0) cout << a;
  if (b != 0) {
    if (a != 0 && b > 0) cout << "+";
    if (b * b != 1) cout << b;
    if (b == -1) cout << "-";
    cout << "x";
  }
  if (c != 0) {
    if ((a != 0 || b != 0) && c > 0) cout << "+";
    if (c * c != 1) cout << c;
    if (c == -1) cout << "-";
    cout << "y";
  }
  if (a == 0 && b == 0 && c == 0) cout << 0;
  return 0;
}