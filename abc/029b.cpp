#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> s(12);
  for(int i = 0; i < 12; i++) {
    cin >> s.at(i);
  }
  int ans = 0;
  for(int i = 0; i < 12; i++) {
    bool fr = false;
    for(int j = 0; j < s.at(i).size(); j++) {
      if(s.at(i).at(j) == 'r') {
        fr = true;
      }
    }
    if(fr) ans++;
  }
  cout << ans << endl;
}