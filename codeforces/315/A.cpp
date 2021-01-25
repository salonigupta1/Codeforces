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

int main()
{
    //OJ;
    int n, a[1000], b[1000], c[1001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i] >> b[i];
        c[b[i]] += 1;
    }
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        c[b[i]] -= 1;
        if (c[a[i]] == 0)
        {
            count += 1;
        }
        c[b[i]] += 1;
    }
    cout << count << endl;
    return 0;
}