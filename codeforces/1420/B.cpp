#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

ll powOfPositive(ll n) 
{ 
    ll pos = floor(log2(n)); 
    return pos;
}

int main()
{
   // OJ;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        vector<ll> dp(30, 0);
         
        ll ans = 0;
        for(ll i=0; i<n; i++){
            if(arr[i] == 1){
                dp[0]++;
                continue;
            }
            ll x = powOfPositive(arr[i]);
            dp[x]++;
        }

        for(ll i=0 ; i<30; i++){
            if(dp[i]>0){
                ans+= ((dp[i])*(dp[i]-1))/2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}