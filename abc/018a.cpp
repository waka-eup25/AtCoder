#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (max(max(a, b), c) == a) {
    cout << 1 << endl;
    if(max(b, c) == b) {
      cout << 2 << endl << 3 << endl;
    } else cout << 3 << endl << 2 << endl;
  } else { // aが1番でないとき
    if(max(b, c) == b) {
      if(max(a,c) == a) {
        cout << 2 << endl << 1 << endl << 3 << endl;
      } else cout << 3 << endl << 1 << endl << 2 << endl;
    } else {
      if(max(a,b) == a) {
        cout << 2 << endl << 3 << endl << 1 << endl;
      } else cout << 3 << endl << 2 << endl << 1 << endl;
    }
  }
}