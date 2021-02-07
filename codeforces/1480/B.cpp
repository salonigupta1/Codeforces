#include <iostream>
#include <vector>
#include <math.h>
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
        ll A, B, n;
        cin >> A >> B >> n;
        vector<ll> aP(n);
        for(ll i=0; i<n; i++){
            cin >> aP[i];
        }

        vector<ll> hP(n);
        for(ll i=0; i<n; i++){
            cin >> hP[i];
        }

        bool lost = false;
        for(ll i=0; i<n; i++){
            ll ans = (hP[i]+A-1)/A;
            B-=(ans*aP[i]);
        }

        ll ans = *max_element(aP.begin(), aP.end());
        

        if(B+ans<=0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }
    return 0;
}