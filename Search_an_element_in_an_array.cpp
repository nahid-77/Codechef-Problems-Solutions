#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        if (data == x)
            found = true;
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
