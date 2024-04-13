#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  double kakuritu = 1.0 / n;
  double money = 0.0;
  for(int i = 1; i <= n; i++) {
    money += 10000.0 * i * kakuritu; 
  }
  cout << money << endl;
}