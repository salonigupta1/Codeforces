#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
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
   // OJ;
    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        vector<ll> f(n);
        vector<ll> g(m);
        for(ll i=0; i<n; i++){
            cin >> f[i];
        }

        for(ll i=0; i<m; i++){
            cin >> g[i];
        }

        sort(f.begin(), f.end());
        ll p=0;
        ll ans = 0;
        for(ll i=n-1; i>=0; i--){
            ll op1 = g[f[i]-1];
            ll op2;
            if(p>=m){
                op2 = INT_MAX;
            } else {
                op2 = g[p];
            }
            if(op1<=op2){
                ans+= op1;
            } else {
                ans+= op2;
                p++;
            }
        }

        cout << ans << endl;

    }
    return 0;
}