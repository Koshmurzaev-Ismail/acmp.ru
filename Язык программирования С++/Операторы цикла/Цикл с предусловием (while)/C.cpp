#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, p = 1;
  cin >> n;
  while (p <= n) {
    cout << p << " ";
    p *= 2;
  }
  return 0;
}