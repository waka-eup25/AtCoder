#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if(a - b < b) {
    cout << a - b << endl;
  } else cout << b - 1 << endl;
}