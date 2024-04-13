#include <bits/stdc++.h>
using namespace std;

int main() {
  double w, h;
  cin >> w >> h;
  if(w / h > 1.5) {
    cout << "16:9" << endl;
  } else cout << "4:3" << endl;
}