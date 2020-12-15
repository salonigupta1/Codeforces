#include <iostream>
#include <vector>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int N;
    cin >> N;
    vector<int> A(N);
    int sum = 0;

    for (auto &a : A)
    {
        cin >> a;
        sum += a;
    }

    for (int count = N; count > 0; count--)
    {
        if (sum % count != 0)
            continue;

        int goal = sum / count;
        bool fail = false;

        for (int i = 0, j = 0; i < N; i = j)
        {
            int current = 0;

            while (j < N && current + A[j] <= goal)
            {
                current += A[j];
                j++;
            }

            if (current != goal)
            {
                fail = true;
                break;
            }
        }

        if (!fail)
        {
            cout << N - count << '\n';
            return;
        }
    }
}

int main()
{
    //OJ;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}