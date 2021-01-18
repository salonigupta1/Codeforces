#include <iostream>
#include<vector>
#include<algorithm>
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
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());
        if(k==0){
            cout << arr[0]-arr[n-1] << endl;
            continue;
        }
        ll sum = arr[0];
        ll i = 1;
        while(i<=k && i<n){
            sum+= arr[i];
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}