#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, k, s, t;
  cin >> a >> b >> c >> k >> s >> t;
  int money = a * s + b * t;
  if(s + t >= k) {
    money -= c * (s + t);
  }
  cout << money << endl;
}