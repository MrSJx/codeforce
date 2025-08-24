#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[101] = {0};
        bool found = false;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a[x]++;
            if (a[x] >= 2) {
                found = true;
            }
        }
        if (found) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
