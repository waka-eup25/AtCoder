#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, ave;
  int max = 0;
  cin >> n;
  vector<int> num(n);
  for(int i = 0; i < n; i++) {
    cin >> num.at(i);
    max += num.at(i);
  }
  ave = max / n;
  for(int i = 0; i < n; i++) {
    if(ave > num.at(i)) {
      cout << ave - num.at(i) << endl;
    } else cout << num.at(i) - ave << endl;
  }
}