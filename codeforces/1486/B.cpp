#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
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
    //OJ;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> xcoord(n);
        vector<ll> ycoord(n);
        for(ll i=0; i<n; i++){
            cin >> xcoord[i] >> ycoord[i];
        }

        sort(xcoord.begin(), xcoord.end());
        sort(ycoord.begin(), ycoord.end());
        ll ans1 = 0;
        ll ans2 = 0;
        if(n%2 != 0){
            ans1 = 1;
            ans2 = 1;
        } else {
            ll mid = n/2;
            ans1 = xcoord[mid]-xcoord[mid-1]+1;
            ans2 = ycoord[mid]-ycoord[mid-1]+1;
        }

        cout << ans1*ans2 << endl;

    }
    return 0;
}