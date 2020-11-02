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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for(ll i=0; i<n; i++){
            cout << (4*n-2)-2*i << " ";
        }
        cout << endl;
    }
    return 0;
}