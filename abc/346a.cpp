#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  for(int i = 0; i < N-1; i++) {
    cout << a.at(i) * a.at(i+1) << " ";
  }
  cout << endl;
}