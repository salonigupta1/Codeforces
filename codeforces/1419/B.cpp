#include <iostream>
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

ll getS(ll num){
    return (num)*(num+1)/2;
}

int main()
{
    //OJ;
    int t;
    cin >> t;
    while(t--) {
        ll x;
        cin >> x;
        ll ans = 0;
        for(ll i=1; getS((1LL<<i)-1)<=x; i++){
            ans++;
            x -= getS((1LL<<i)-1);
        }
        

        cout << ans << endl;
    }
    return 0;
}