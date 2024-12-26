#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h, l, w, ans;
        cin >> h >> l >> w;
        ans = 1000 / (2 * ((h * l) + (l * w) + (w * h)));
        cout << ans << endl;
    }
    return 0;
}