#include <iostream>
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
    while (t--)
    {
        int f, w, h;
        cin >> w >> h >> f;

        int count = 1;
        while (w % 2 == 0 )
        {
            w = w / 2;
            count *= 2;
        }

        while (h % 2 == 0 )
        {
            h = h / 2;
            count *= 2;
        }

        if (count >= f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}