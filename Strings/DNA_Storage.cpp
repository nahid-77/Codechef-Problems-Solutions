#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s, s_new;
        cin >> s;

        for (int i = 0; i < n; i += 2)
        {
            if (s[i] == '0' && s[i + 1] == '0')
                s_new.append("A");
            else if (s[i] == '0' && s[i + 1] == '1')
                s_new.append("T");
            else if (s[i] == '1' && s[i + 1] == '0')
                s_new.append("C");
            else if (s[i] == '1' && s[i + 1] == '1')
                s_new.append("G");
        }

        cout << s_new << endl;
    }

    return 0;
}
