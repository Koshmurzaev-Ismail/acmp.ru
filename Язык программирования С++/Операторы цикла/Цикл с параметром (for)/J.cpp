#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, t, s, m;
  s = 0;
  m = 0;
  cin >> n;
  for (int i = 0; i < n ; i++) {
    cin >> t;
    if (t <= 0) s = 0;
    else s++;
    if (s > m) m = s;
  }
  cout << m;
  return 0;
}