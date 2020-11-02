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
        ll n, ans = 0, c = 1;
        cin >> n;
        while (n)
        {
            if (n % 4 == 2 || n == 4)
            {
                ans += c * (n / 2);
                n /= 2;
            }
            else
            {
                ans += c;
                n--;
            }
            c = !c;
        }
        cout << ans << '\n';
    }

    return 0;
}
