#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        
        unordered_map<int, int> max_penalty;

        for (int i = 0; i < N; ++i)
        {
            int day = A[i];
            int penalty = i + 1; 

            if (max_penalty.find(day) == max_penalty.end())
            {
                max_penalty[day] = penalty;
            }
            else
            {
                if (penalty > max_penalty[day])
                {
                    max_penalty[day] = penalty;
                }
            }
        }

        int total_penalty = 0;
        for (const auto &entry : max_penalty)
        {
            total_penalty += entry.second;
        }

        cout << total_penalty << '\n';
    }

    return 0;
}
