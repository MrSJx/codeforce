#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int arr_sorted[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
            arr_sorted[i] = arr[i];
        sort(arr_sorted, arr_sorted + n);
        bool is_sorted = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr_sorted[i])
            {
                is_sorted = false;
                break;
            }
        }
        if (k == 1 && n != 1 && !is_sorted)
        {
            cout << "NO\n";
        }
        else if (k == n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}