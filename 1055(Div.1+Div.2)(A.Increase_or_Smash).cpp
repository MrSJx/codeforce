#include <bits\stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> arr1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            set<int> un(arr.begin(), arr.end());
            vector<int> darr(un.begin(), un.end());
            int len = darr.size();
            cout << 2 * len - 1 << "\n";
        }
    }
}