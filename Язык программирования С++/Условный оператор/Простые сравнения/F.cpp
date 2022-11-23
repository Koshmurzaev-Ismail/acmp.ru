#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a1 = n / 1000;
  int a2 = n / 100 % 10;
  int a3 = n / 10 % 10;
  int a4 = n % 10;
  if (n == a4 * 1000 + a3 * 100 + a2 * 10 + a1) cout << "YES";
  else cout << "NO";
  return 0;
 }