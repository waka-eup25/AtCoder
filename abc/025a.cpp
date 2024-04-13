#include <bits/stdc++.h>
using namespace std;

int main() {
  string moji;
  vector<string> s(5);
  int n;
  cin >> moji;
  for(int i = 0; i < 5; i++) {
    s.at(i) = moji.at(i);
  }
  cin >> n;
  vector<string> two = {
    s.at(0) + s.at(0), s.at(0) + s.at(1), s.at(0) + s.at(2), s.at(0) + s.at(3), s.at(0) + s.at(4), 
    s.at(1) + s.at(0), s.at(1) + s.at(1), s.at(1) + s.at(2), s.at(1) + s.at(3), s.at(1) + s.at(4), 
    s.at(2) + s.at(0), s.at(2) + s.at(1), s.at(2) + s.at(2), s.at(2) + s.at(3), s.at(2) + s.at(4), 
    s.at(3) + s.at(0), s.at(3) + s.at(1), s.at(3) + s.at(2), s.at(3) + s.at(3), s.at(3) + s.at(4), 
    s.at(4) + s.at(0), s.at(4) + s.at(1), s.at(4) + s.at(2), s.at(4) + s.at(3), s.at(4) + s.at(4)};
  cout << two.at(n - 1) << endl;
}