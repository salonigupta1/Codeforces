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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int k = 0;
        int l = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == n - 1 && j == 0)
                {
                    cout << 1 << " ";
                    continue;
                }
                if (j == k)
                {
                    cout << 1 << " ";
                }
                else if (j == l)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
            }
            k++;
            l++;

            cout << endl;
        }
    }
}
