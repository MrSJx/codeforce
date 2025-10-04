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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 2)
        {
            cout << "Yes\n";
        }
        else
        {
            set<int> ls(arr.begin(), arr.end());
            vector<int> darr(ls.begin(), ls.end());
            int len = darr.size();
            if (len == 2)
            {
                int count1 = count(arr.begin(), arr.end(), darr[0]);
                int count2 = count(arr.begin(), arr.end(), darr[1]);
                if (min(count1, count2) == (max(count1, count2) - 1) && count1 != count2)
                {
                    cout << "Yes\n";
                }
                else if (count1 == count2)
                {
                    cout << "Yes\n";
                }
                else
                {
                    cout << "No\n";
                }
            }
            else if (len == 1)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
}