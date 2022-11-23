#include <bits/stdc++.h>
using namespace std;
int main() {
  int h, a, b;
  cin >> h >> a >> b;
  cout << (h - b % h - 1) / (a - b % h) + 1;
  return 0;
}