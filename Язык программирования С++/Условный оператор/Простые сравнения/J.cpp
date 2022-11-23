#include <bits/stdc++.h>
using namespace std;
int main() {
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  string s = s1 + "\n" + s2 + "\n" + s3;
  string b = "black", r = "red", g = "green", y =  "yellow";
  string f1 = b + "\n" + b + "\n" + g;
  string f2 =  b + "\n" + b + "\n" + "GREEN";
  string f3 =  b + "\n" + y + "\n" + b;
  string f4 = r + "\n" + b + "\n" + b;
  string f5 = r + "\n" + y + "\n" + b;
  string f6 = b + "\n" + "YELLOW" + "\n"+ b;
  if (s == f1) cout << f2;
  else if (s == f2) cout << f3;
  else if (s == f3) cout << f4;
  else if (s == f4) cout << f5;
  else if (s == f5) cout << f1;
  else if (s == f6) cout << f6;
  else cout << "error";
  return 0;
}