#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, a;
  cin >> n >> a;
  int ans = a;
  for (int i = 0; i < n; i++) {
    string op;
    int b;
    cin >> op >> b;
    if (op == "+") {
      ans += b;
    } else if (op == "-") {
      ans -= b;
    } else if (op == "*") {
      ans *= b;
    } else {
      if(b == 0) {
        cout << "error"<< endl;
        break;
      }
      ans /= b;
    }
    cout << i+1 << ":" << ans << endl;
  }
}