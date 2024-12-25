#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c = 0;
        string s;
        cin >> n >> s;

        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == s[i])
            {
                c++;
            }
        }

        cout << c << endl;
    }

    return 0;
}
