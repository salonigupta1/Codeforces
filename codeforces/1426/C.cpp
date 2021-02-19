#include <iostream>
#include <algorithm>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

ll fun(ll n){
    ll ans = 1e18;
    for(ll i=1; i*i<=n; i++){
        ans = min(ans, i-1+((n-1)/i));
    }

    return ans;
}

int main()
{
    //OJ;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << fun(n) << endl;
    }
    return 0;
}