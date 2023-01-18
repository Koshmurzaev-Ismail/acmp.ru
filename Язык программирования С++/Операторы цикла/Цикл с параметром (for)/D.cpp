#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i ++) {
    cin >> m;
    if (m <= 437) {
      cout << "Crash" << " " << i + 1;
      return 0;
    }
  }
  cout << "No crash";
  return 0;
}