#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int x = s[0] - 'A' + 1;
  int y = s[1] - '0';
  if ((x + y) % 2 == 0)
    cout << "BLACK";
  else
    cout << "WHITE";
  return 0;
}