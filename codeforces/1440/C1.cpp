#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ok4(vector<vector<int>> &b, vector<string> &a, int i, int j)
{
    a[i][j] = a[i + 1][j] = a[i][j + 1] = a[i + 1][j + 1] = '0';
    vector<int> c;
    c.push_back(i);
    c.push_back(j);
    c.push_back(i + 1);
    c.push_back(j);
    c.push_back(i + 1);
    c.push_back(j + 1);
    b.push_back(c);
    c.clear();
    c.push_back(i);
    c.push_back(j + 1);
    c.push_back(i + 1);
    c.push_back(j);
    c.push_back(i + 1);
    c.push_back(j + 1);
    b.push_back(c);
    c.clear();
    c.push_back(i);
    c.push_back(j);
    c.push_back(i);
    c.push_back(j + 1);
    c.push_back(i + 1);
    c.push_back(j);
    b.push_back(c);
    c.clear();
    c.push_back(i);
    c.push_back(j);
    c.push_back(i);
    c.push_back(j + 1);
    c.push_back(i + 1);
    c.push_back(j + 1);
    b.push_back(c);
}

void ok1(vector<vector<int>> &b, vector<string> &a, int i, int j)
{
    vector<int> c;
    if (a[i][j] == '1')
    {
        c.push_back(i);
        c.push_back(j + 1);
        c.push_back(i + 1);
        c.push_back(j);
        c.push_back(i + 1);
        c.push_back(j + 1);
        b.push_back(c);
    }
    if (a[i][j + 1] == '1')
    {
        c.push_back(i);
        c.push_back(j);
        c.push_back(i + 1);
        c.push_back(j);
        c.push_back(i + 1);
        c.push_back(j + 1);
        b.push_back(c);
    }
    if (a[i + 1][j] == '1')
    {
        c.push_back(i);
        c.push_back(j);
        c.push_back(i);
        c.push_back(j + 1);
        c.push_back(i + 1);
        c.push_back(j + 1);
        b.push_back(c);
    }
    if (a[i + 1][j + 1] == '1')
    {
        c.push_back(i);
        c.push_back(j);
        c.push_back(i + 1);
        c.push_back(j);
        c.push_back(i);
        c.push_back(j + 1);
        b.push_back(c);
    }
}

void ok2(vector<vector<int>> &b, vector<string> &a, int i, int j)
{
    // cout<<"in "<<"\n";
    vector<int> c;
    if (a[i][j] == '1' && a[i][j + 1] == '1')
    {
        c.push_back(i);
        c.push_back(j);
        c.push_back(i);
        c.push_back(j + 1);
        c.push_back(i + 1);
        c.push_back(j + 1);
        b.push_back(c);
        a[i][j] = a[i][j + 1] = '0';
        a[i + 1][j + 1] = '1';
    }
    if (a[i][j] == '1' && a[i + 1][j] == '1')
    {
        c.push_back(i);
        c.push_back(j);
        c.push_back(i + 1);
        c.push_back(j);
        c.push_back(i + 1);
        c.push_back(j + 1);
        b.push_back(c);
        a[i][j] = a[i + 1][j] = '0';
        a[i + 1][j + 1] = '1';
    }
    if (a[i][j] == '1' && a[i + 1][j + 1] == '1')
    {
        c.push_back(i);
        c.push_back(j);
        c.push_back(i + 1);
        c.push_back(j + 1);
        c.push_back(i + 1);
        c.push_back(j);
        b.push_back(c);
        a[i][j] = a[i + 1][j + 1] = '0';
        a[i + 1][j] = '1';
    }
    if (a[i][j + 1] == '1' && a[i + 1][j] == '1')
    {
        c.push_back(i);
        c.push_back(j + 1);
        c.push_back(i + 1);
        c.push_back(j);
        c.push_back(i);
        c.push_back(j);
        b.push_back(c);
        a[i][j + 1] = a[i + 1][j] = '0';
        a[i][j] = '1';
    }
    if (a[i][j + 1] == '1' && a[i + 1][j + 1] == '1')
    {
        c.push_back(i);
        c.push_back(j + 1);
        c.push_back(i + 1);
        c.push_back(j + 1);
        c.push_back(i);
        c.push_back(j);
        b.push_back(c);
        a[i][j + 1] = a[i + 1][j + 1] = '0';
        a[i][j] = '1';
    }
    if (a[i + 1][j] == '1' && a[i + 1][j + 1] == '1')
    {
        c.push_back(i + 1);
        c.push_back(j);
        c.push_back(i + 1);
        c.push_back(j + 1);
        c.push_back(i);
        c.push_back(j);
        b.push_back(c);
        a[i + 1][j] = a[i + 1][j + 1] = '0';
        a[i][j] = '1';
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> b;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int total = 0;
            total = (a[i][j] - '0') + (a[i][j + 1] - '0') + (a[i + 1][j] - '0') + (a[i + 1][j + 1] - '0');
            if (total == 0)
                continue;
            else if (total == 3)
            {
                vector<int> c;
                if (a[i][j] == '1')
                {
                    a[i][j] = '0';
                    c.push_back(i);
                    c.push_back(j);
                }
                if (a[i][j + 1] == '1')
                {
                    a[i][j + 1] = '0';
                    c.push_back(i);
                    c.push_back(j + 1);
                }
                if (a[i + 1][j] == '1')
                {
                    a[i + 1][j] = '0';
                    c.push_back(i + 1);
                    c.push_back(j);
                }
                if (a[i + 1][j + 1] == '1')
                {
                    a[i + 1][j + 1] = '0';
                    c.push_back(i + 1);
                    c.push_back(j + 1);
                }
                b.push_back(c);
            }
            else if (total == 4)
            {
                ok4(b, a, i, j);
            }
            else if (total == 1)
            {
                ok1(b, a, i, j);
                ok4(b, a, i, j);
            }
            else
            {
                ok2(b, a, i, j);
                ok1(b, a, i, j);
                ok4(b, a, i, j);
            }
        }
    }
    cout << (int)b.size() << "\n";
    for (int i = 0; i < (int)b.size(); i++)
    {
        for (int j = 0; j < 6; j++)
            cout << b[i][j] + 1 << " ";
        cout << "\n";
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