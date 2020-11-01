#include <iostream>
#include<algorithm>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    //OJ;
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin >> n;
        if (n == 1 || n == 4 || n == 2)
        {
            cout << -1 << "\n";
            continue;
        }
        int a = 0, b = 0, c = 0;

        c = n / 7;
        n = n % 7;
        if (n == 0)
        {
            cout << a << " " << b << " " << c << "\n";
            continue;
        }
        if (n == 3 || n == 6)
        {
            a = n / 3;
        }
        else if (n == 5)
        {
            b = 1;
        }
        else if (n == 1)
        {
            c = max(c - 1, 0);
            n = n + 7;
            a = 1;
            b = 1;
        }
        else if (n == 2)
        {
            c = max(c - 1, 0);
            a = 3;
        }
        else if (n == 4)
        {
            c = max(c - 1, 0);
            a = 2;
            b = 1;
        }

        cout << a << " " << b << " " << c << "\n";
    }
}