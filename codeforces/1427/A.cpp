#include <iostream>
#include <vector>
#include <algorithm>
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
        vector<int> arr(n);
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total += arr[i];
        }
        if (total == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            sort(arr.begin(), arr.end());
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
                if (sum == 0)
                {
                    swap(arr[i], arr[n - 1]);
                }
            }

            sum = 0;
            int ok = 1;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
                if (sum == 0)
                {
                    ok = 0;
                    break;
                }
            }

            if (ok)
            {
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            else
            {
                sort(arr.rbegin(), arr.rend());
                int sum = 0;
                for (int i = 0; i < n; i++)
                {
                    sum += arr[i];
                    if (sum == 0)
                    {
                        swap(arr[i], arr[n - 1]);
                    }
                }

                sum = 0;
                int ok = 1;
                for (int i = 0; i < n; i++)
                {
                    sum += arr[i];
                    if (sum == 0)
                    {
                        ok = 0;
                        break;
                    }
                }

                if (ok)
                {
                    for (int i = 0; i < n; i++)
                    {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}