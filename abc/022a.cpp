#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, t;
  cin >> n >> s >> t;
  vector<int> w_a(n);
  int g = 0;
  int day = 0;
  for (int i = 0; i < n; i++) {
    cin >> w_a.at(i);
    g += w_a.at(i);
    if(s <= g && g <= t) {
      day++;
    }
  }
  cout << day << endl;
}