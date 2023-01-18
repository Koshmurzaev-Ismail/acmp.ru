#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x, s = 0;
  cin >> n;
  for (int i = 0; i < n * n; i++) {
    cin >> x;
    s += x;
  }
  cout << s / 2;
  return 0;
}