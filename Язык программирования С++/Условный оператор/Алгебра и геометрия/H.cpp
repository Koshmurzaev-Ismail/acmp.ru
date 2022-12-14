#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  if (a == 0) {
    if (b == 0) {
      if (c == 0) cout << -1;
      else cout << 0;
    } else {
      cout << 1 << endl;
      cout << -c * 1.0 / b;
    }
  } else {
    long long d = b * b - 4 * a * c;
    if (d < 0) cout << 0;
    else if (d == 0) {
      cout << 1 << endl;
      cout << -b * 1.0 / (2.0 * a);
    }
    else {
      double x1 = (-b - sqrt(d)) / (2.0 * a);
      double x2 = (-b + sqrt(d)) / (2.0 * a);
      cout << 2 << endl;
      cout << x1 << endl;
      cout << x2;
    }
  }
  return 0;
}