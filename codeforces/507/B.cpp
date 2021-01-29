#include <iostream>
#include<math.h>
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
    int r, x, y, x1, y1;
    cin >> r >> x >> y >> x1 >> y1;
    double dist = sqrt(pow(y1-y, 2) + pow(x1-x, 2));
    cout << (int)(ceil)(dist/r/2) << endl;
    return 0;
}