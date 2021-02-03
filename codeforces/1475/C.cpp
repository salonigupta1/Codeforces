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

#define ll long long int

int main()
{
    //OJ;
    ll t;
    cin >> t;
    while(t--){
        ll a, b, pair;
        cin >> a >> b >> pair;
        vector<ll> bo(pair), gi(pair);
        vector<ll> cntb(a+1, 0), cntg(b+1, 0);
        ll ans = 0;
    
        for(ll i=0; i<pair; i++){
            cin >> bo[i];
            cntb[bo[i]]++;
        }
        for(ll i=0; i<pair; i++){
            cin >> gi[i];
            cntg[gi[i]]++;
        }

        for(ll i=0; i<pair; i++){
            ans+= (pair-(cntb[bo[i]]+cntg[gi[i]])+1);
        }

        cout << ans/2 << endl;
    }
    return 0;
}