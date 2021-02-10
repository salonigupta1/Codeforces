#include <iostream>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

ll fact(ll num){
    ll ans = 1;
    for(ll i=1; i<=num; i++){
        ans*= i;
    }

    return ans;
}

int main()
{
   // OJ;
    ll n;
    cin >> n;
    ll r = n/2;
    ll ans = (fact(n)/(fact(r)*fact(n-r)))/2 * fact(r-1)*fact(r-1);
    cout << ans << endl;
    return 0;
}