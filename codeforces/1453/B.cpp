#include <iostream>
#include <vector>
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
    FIO;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> arr(n+1);
        for(ll i=1; i<=n; i++){
            cin >> arr[i];
        }

        ll ans = 0;
        for(ll i=2; i<=n; i++){
            ans+= abs(arr[i]-arr[i-1]);
        }

        ll mx = max(abs(arr[1]-arr[2]), abs(arr[n]-arr[n-1]));
        for(ll i=2; i<n; i++){
            mx = max(mx, (abs(arr[i]-arr[i-1])+abs(arr[i]-arr[i+1])-abs(arr[i+1]-arr[i-1])));
        }

        cout << ans-mx << endl;
    }    
}