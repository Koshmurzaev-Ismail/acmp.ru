#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a1 = n / 100000;
  int a2 = n / 10000 % 10;
  int a3 = n / 1000 % 10;
  int a4 = n / 100 % 10;
  int a5 = n / 10 % 10;
  int a6 = n % 10;
  if (a1 + a2 + a3 == a4 + a5 + a6)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}