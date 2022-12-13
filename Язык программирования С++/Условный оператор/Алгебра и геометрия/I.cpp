#include <bits/stdc++.h>
using namespace std;
int main() {
  int l1, w1, h1, l2, w2, h2, lc, wc, hc, l3, w3;
  cin >> l1 >> w1 >> h1;
  cin >> l2 >> w2 >> h2;
  cin >> lc >> wc >> hc;
  string f = "NO";
  if (l1 > w1) swap(l1, w1);
  if (l2 > w2) swap(l2, w2);
  if (lc > wc) swap(lc, wc);
  if (h1 + h2 <= hc) {
    if (max(l1, l2) <= lc && max(w1, w2) <= wc)
      f = "YES";
  }
  if (max(h1, h2) <= hc) {
    l3 = l1 + l2;
    w3 = max(w1, w2);
    if (l3 > w3) swap(l3, w3);
    if (l3 <= lc && w3 <= wc)
      f = "YES";
  }
  cout << f;
  return 0;
}