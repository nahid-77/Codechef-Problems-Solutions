#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string S, T, M;
        cin >> S >> T;

        for (int i = 0; i < 5; i++)
        {
            if (S[i] == T[i])
                M.append("G");
            else
                M.append("B");
        }

        cout << M << endl;
    }

    return 0;
}
