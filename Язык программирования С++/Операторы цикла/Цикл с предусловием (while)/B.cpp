#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, d = 2;
  cin >> n;
  while (n % d != 0) {
    d++;
  }
  cout << d;
  return 0;
}