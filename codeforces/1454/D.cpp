#include <iostream>
#include <map>
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

int main()
{
    //OJ;
    FIO;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll n1 = n;
        map<ll, ll> m;
        for(ll i=2; i*i<=n; i++){
            while(n%i==0){
                m[i]++;
                n/=i;
            }
        }

        if(n>1){
            m[n]++;
        }

        ll temp = 0, mn;
        for(auto x: m){
            if(x.second>temp){
                mn = x.first;
                temp = x.second;
            }
        }

        ll k = temp;
        cout << k << endl;
        for(ll i=0; i<k-1; i++){
            cout << mn << " ";
        }

        if(k>1){
            ll p = n1/pow(mn, (k-1));
            cout << p << endl;
        } else {
            cout << n1 << endl;
        }
    }
    return 0;
}