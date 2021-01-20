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
     int n, x, count[8] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        count[x] += 1;
    }

    bool solution;
    if (count[5] == 0 && count[7] == 0 && count[2] >= count[4] && count[1] == count[4] + count[6] && count[2] + count[3] == count[4] + count[6])
    {
        for (int i = 0; i < count[4]; ++i)
        {
            printf("1 2 4\n");
        }
        count[2] -= count[4];
        for (int i = 0; i < count[2]; ++i)
        {
            printf("1 2 6\n");
        }
        for (int i = 0; i < count[3]; ++i)
        {
            printf("1 3 6\n");
        }
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}