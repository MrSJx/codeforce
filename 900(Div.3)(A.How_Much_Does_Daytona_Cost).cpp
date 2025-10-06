#include <bits\stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ck = count(arr.begin(), arr.end(), k);
        if (ck == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}