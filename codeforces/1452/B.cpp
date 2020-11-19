#include <iostream>
#include <string>
#include<set>
#include<climits>
#include <algorithm>
#include <stack>
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
    FIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        ll mx = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += x;
            if(x>mx){
                mx = x;
            }
        }

        ll x = 0;
        if(sum%(n-1)!=0){
            x = (sum/(n-1)+1)*(n-1) - sum;
            sum+=x;
        }
        if(mx <=(sum/(n-1))){
            cout << (0+x) << endl;
        } else {
            cout << ((n-1)*mx-sum+x) << endl;
        }
    }
    return 0;
}