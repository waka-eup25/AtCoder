#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(9);
    vector<int> b(8);
    int a_sum = 0;
    int b_sum = 0;
    for(int i = 0; i < 9; i++) {
        cin >> a.at(i);
        a_sum += a.at(i);
    }
    for(int i = 0; i < 8; i++) {
        cin >> b.at(i);
        b_sum += b.at(i);
    }
    cout << a_sum - b_sum + 1 << endl;
}