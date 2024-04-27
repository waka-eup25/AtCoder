#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a.at(ans);
        ans++;
        while(ans > 0) {
            if(a.at(ans) == a.at(ans - 1)) {
                a.at(ans - 1) = a.at(ans - 1) + 1;
                ans--;
            }
        }
        for(int i = 0; i < ans; i++) {
            cout << a.at(i) << " " ;
        }
        cout << endl;
        cout << ans + 1 << endl;
    }
}