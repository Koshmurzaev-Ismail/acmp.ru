#include <bits/stdc++.h>
using namespace std;
int main() {
  int a1, b1, c1, a2, b2, c2;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
  int m1 = min(min(a1,b1),c1) - min(min(a2,b2),c2);
  int m3 = max(max(a1,b1),c1) - max(max(a2,b2),c2);
  int m2 = a1 + b1 + c1 - a2 - b2 - c2 - m1 - m3;
  if (m1 == 0 && m2 == 0 && m3 == 0) cout << "Boxes are equal";
  else if (m1<=0 && m2<=0 && m3<=0)
    cout << "The first box is smaller than the second one";
  else if (m1>=0 && m2>=0 && m3>=0)
    cout << "The first box is larger than the second one";
  else cout << "Boxes are incomparable";
  return 0;
}