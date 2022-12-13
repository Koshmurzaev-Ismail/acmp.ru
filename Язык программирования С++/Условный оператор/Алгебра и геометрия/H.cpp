#include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b,c;
    double x1,x2,d;
    cin >> a >> b >> c;
    if(a == 0) {
      if (b == 0) 
        if (c == 0) cout << -1;
        else cout << 0;
      else {
            cout << 1 << endl;
            if(c != 0)
                x1 = -c / b;
            else
                x1 = 0;
            cout << fixed << setprecision(11) << x1;
        }
      } 
    else if(a != 0) {
        d = b * b - 4.0 * a * c;
        if(d > 0){
            cout << 2 << endl;
            x1 = (-b - sqrt(d))/(2 * a);
            x2 = (-b + sqrt(d))/(2 * a);
                if(x1 != 0)
                    cout << fixed << setprecision(11) << x1;
                else
                    cout <<fixed << setprecision(11) << 0;
            cout << endl;
            if(x2 != 0)
                cout <<fixed <<  setprecision(11) << x2;
                else
                    cout <<fixed << setprecision(11) <<  0;
        }
        else
            if(d == 0){
                cout << 1 << endl;
                x1 = -b / (2 * a);
                if(x1)
                    cout <<fixed << setprecision(11) <<  x1;
                else
                    cout << fixed << setprecision(11) << 0;
            }
            else
                if(d < 0)
                    cout << 0;
    }
    return 0;
}