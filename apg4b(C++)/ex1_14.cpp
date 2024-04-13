#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int dai = max(max(A, B), C);
  int sho = min(min(A, B), C);
  cout << dai - sho << endl;
}