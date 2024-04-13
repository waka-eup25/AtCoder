#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans;
  cin >> n;
  vector<int> a(n-1);
  for(int i = 0; i < n-1; i++) {
    cin >> a.at(i);
    ans += a.at(i);
  }
  cout <<  -1 * ans << endl;
}