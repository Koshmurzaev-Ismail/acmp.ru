#include <bits/stdc++.h>
using namespace std;
int main() {
  string s1, s2;
  int x1, y1, x2, y2;
  cin >> s1 >> s2;
  x1 = s1[0] - 'A' + 1;
  y1 = s1[1] - '0';
  x2 = s2[0] - 'A' + 1;
  y2 = s2[1] - '0';
  bool f = true;
if (x1 == x2 || y1 == y2) {
    cout << "Rook\n";
    cout << "Queen\n";
    f = false;
  }
if (abs(x2 - x1) == abs(y2 - y1)) {
    cout << "Bishop\n";
    cout << "Queen\n";
    f = false;
  }
if ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) == 5) {
    cout << "Knight\n";
    f = false;
  }
if (abs(x2 - x1) <= 1 && abs(y2 - y1) <= 1) {
    cout << "King\n";
    f = false;
  }
if ((x1 == x2) && ((y2 - y1 == 1) || ((y1 == 2) and (y2 - y1 == 2))) && (y1 > 1)) {
    cout << "Pawn\n";
    f = false;
  }
if (f)
    cout << "Nobody\n";
  return 0;
}