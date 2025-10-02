#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n + 1);
        vector<int> darr(n);
        arr[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            darr[i] = arr[i + 1] - arr[i];
        }

        int max_diff = *max_element(darr.begin(), darr.end());

        int t = 2 * (x - arr[n]);

        int ans = max(max_diff, t);
        cout << ans << "\n";
    }

    return 0;
}
