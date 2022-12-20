#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int k = n % 5;
  n /= 5;
  switch (k)
    {
      case 0: {cout << n << " " << 0; break;}
      case 1: {cout << n - 1 << " " << 2;break;}
      case 2: {cout << n - 2 << " " << 4;break;}
      case 3: {cout << n << " " << 1;break;}
      case 4: {cout << n - 1 << " " << 3;break;}
      }
  return 0;
}