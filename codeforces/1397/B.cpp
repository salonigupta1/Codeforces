#include <iostream>
#include <math.h>
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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    ll k = 1;
    while(pow(k,n-1)<=pow(10,10)){
        k++;
    }

    k--;
    ll res = LLONG_MAX;
    for(ll i=1; i<=k; i++){
        ll temp = 0;
        for(ll j=0; j<n; j++){
            temp+= abs(arr[j]-pow(i,j));
        }
        //cout << temp <<" " << i << endl;
        res = min(res, temp);
    }

    cout << res << endl;
    return 0;
}