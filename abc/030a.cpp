#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  double taka = b / a;
  double aoki = d / c;
  if(taka > aoki) {
    cout << "TAKAHASHI" << endl;
  } else if(taka < aoki) {
    cout << "AOKI" << endl;
  } else cout << "DRAW" << endl;
}