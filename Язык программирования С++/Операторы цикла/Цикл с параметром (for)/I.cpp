#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  for (int x = -100; x <= 100 ; x++) {
    if (a * x * x * x + b * x * x + c * x + d == 0)
      cout << x << " ";
  }
  return 0;
}