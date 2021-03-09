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
    ll t;
    cin >> t;
    while(t--){
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        ll lower = 0;
        ll upper = arr[0];
        ll ans = 0;
        if(n==1){
            ans = arr[0];
        }
        for(ll i=1; i<n;){
            while(i<n && arr[i]>=arr[i-1]){
                upper = arr[i];
                i++;
            }

            while(i<n && arr[i]<=arr[i-1]){
                lower = arr[i];
                i++;
            }

            if(i==n){
                lower = 0;
            }

            //cout <<  upper << " " << lower << endl;
            ans+= upper-lower;
            lower = 0;
            upper = 0;
        }

        cout << ans << endl;
    }
    return 0;
}