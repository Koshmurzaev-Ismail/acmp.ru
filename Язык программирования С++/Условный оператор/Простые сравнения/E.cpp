#include <bits/stdc++.h>
using namespace std;
int main() {
  int a1, b1, a2, b2, a3, b3, a4, b4;
  cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;
  int s1 = a1 + a2 + a3 + a4;
  int s2 = b1 + b2 + b3 + b4;
  if (s1 > s2) cout << 1;
  else if (s1 < s2) cout << 2;
  else cout << "DRAW";
  return 0;
 }