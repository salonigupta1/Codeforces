#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <queue>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int N = 1e5 + 5;
vector<int> G[N];

int main()
{
   // OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n), c(m);
        vector<int> ans(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            G[i + 1].clear();
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] != b[i])
            {
                G[b[i]].push_back(i);
            }
        }

        for (int i = 0; i < m; i++)
        {
            cin >> c[i];
        }

        int last = -1;
        if (G[c[m - 1]].size() > 0)
        {
            last = G[c[m - 1]].back();
            G[c[m - 1]].pop_back();
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (b[i] == c[m - 1])
                {
                    last = i;
                    break;
                }
            }
        }

        if (last == -1)
        {
            cout << "NO" << endl;
            continue;
        }

        ans[m - 1] = last;
        for (int i = 0; i < m - 1; i++)
        {
            if (G[c[i]].size() == 0)
            {
                ans[i] = last;
            }
            else
            {
                ans[i] = G[c[i]].back();
                G[c[i]].pop_back();
            }
        }

        bool ok = 1;
        for (int i = 1; i <= n; i++)
        {
            if (G[i].size()>0)
            {
                ok = 0;
                break;
            }
        }

        if (!ok)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < m; i++)
            {
                cout << ans[i] + 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}