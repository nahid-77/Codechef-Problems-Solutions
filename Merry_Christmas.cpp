#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x == 1 || x == 2)
        cout << 1 << endl;
    else if (x >= 3 && x < 7)
        cout << 2 << endl;
    else if (x >= 7)
        cout << 3 << endl;

    return 0;
}