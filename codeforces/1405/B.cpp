#include <iostream>
#include <vector>
#include <climits>
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

int main()
{
    //OJ;
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        ll maxSuff = LONG_MIN;
        for(ll i=n-2; i>=0; i--){
            arr[i]+= arr[i+1];
            maxSuff = max(maxSuff, arr[i]);
        }
        maxSuff = max(maxSuff, arr[n-1]);
        cout << maxSuff << endl;
    }
    return 0;
}