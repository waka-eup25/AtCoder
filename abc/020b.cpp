#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if(b / 100 != 0) {
    cout << 2 * (a * 1000 + b) << endl;
  } else if(b / 10 != 0) {
    cout << 2 * (a * 100 + b) << endl;
  } else cout << 2 * (a * 10 + b) << endl;
}