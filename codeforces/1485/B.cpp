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
    ll n, q, k;
    cin >> n >> q >> k;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }

    while(q--){
        ll l, r;
        cin >> l >> r;
        l--;
        r--;

        cout << k+ arr[r]-arr[l] - 2*(r-l) -1 << endl;
    }


    return 0;
}