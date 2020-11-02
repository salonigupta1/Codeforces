#include <iostream>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int

int main()
{
    //OJ;
    ll t;
    cin >> t;
    while (t--)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (y2 == y1 || x1 == x2)
        {
            cout << abs(x2 - x1) + abs(y2-y1) << endl;
        } else {
            cout << abs(x2-x1)+abs(y2-y1)+2 << endl;
        }
    }
    return 0;
}