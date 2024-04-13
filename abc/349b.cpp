#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int sz = s.size();
  vector<char> a(sz);
  map<char, int> count;
  vector<int> cnt;
  bool fr = true;
  for (int i = 0; i < sz; i++) {
    a.at(i) = s.at(i);
  }

  for(int i =0; i < sz; i++) {
    count[a.at(i)]++;
  }

  for(auto pair : count) {
    cnt.push_back(pair.second);
  }
  sort(cnt.begin(), cnt.end());

  if(cnt.size() >= 2) {
    if(cnt.at(0) != cnt.at(1)) {
      fr = false;
    }
    if(cnt.size() % 2 != 0) {
      fr = false;
    }
    for(int i = 2; i < cnt.size() - 1; i+=2) {
      if(cnt.at(i-1) == cnt.at(i)) {
        fr = false;
      } else {
        if(cnt.at(i) != cnt.at(i+1)) {
          fr = false;
        }
      }
    }
  } else {
    fr = false;
  }
  if(fr) cout << "Yes" << endl; else cout << "No" << endl;
}