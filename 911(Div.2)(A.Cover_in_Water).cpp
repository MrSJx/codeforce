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
        vector<char> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        bool hell = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i - 1] == '.' && arr[i] == '.' && arr[i + 1] == '.')
            {
                cout << 2 << "\n";
                hell = false;
                break;
            }
            else
            {
                if (arr[i] == '.')
                {
                    count++;
                }
            }
        }
        if (hell)
        {
            cout << count << "\n";
        }
        /*vector<int> harr;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == '#')
            {
                harr.push_back(i);
            }
        }
        harr.insert(harr.begin(), 0);
        harr.push_back(n);

        int m = harr.size();
        vector<int> darr;

        for (int i = 0; i < m - 1; i++)
        {
            darr.push_back(harr[i + 1] - harr[i]);
        }

        if (find(darr.begin(), darr.end(), 3) != darr.end())
        {
            cout << 2 << "\n";
        }
        else
        {
            int sum = accumulate(darr.begin(), darr.end(), 0);
            if (sum == n)
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << sum << "\n";
            }
        }*/
    }
}