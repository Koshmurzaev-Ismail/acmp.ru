#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, s = 0;
  cin >> n;
  for (int i = 0; i < n; i ++) {
    cin >> a;
    if (a == 0) s++;
  }
  cout << min(s, n - s);
  return 0;
}