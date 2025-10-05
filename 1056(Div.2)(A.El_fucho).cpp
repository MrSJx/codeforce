#include <bits\stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int w, l = 0, count = 0;
        cin >> w;
        while (w != 1 || l != 0)
        {
            int lo = 0;
            if (w % 2 == 0)
            {
                w = w / 2;
                lo = w;
            }
            else
            {
                w = (w - 1) / 2 + 1;
                lo = w - 1;
            }
            if (l % 2 == 0)
            {
                l = l / 2;
            }
            else
            {
                l = (l - 1) / 2 + 1;
            }

            count++;
            l += lo;

            if (w == 1 && l == 1)
            {
                cout << count + 1 << "\n";
                break;
            }
        }
    }
}