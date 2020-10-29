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
ll MOD= 1000000007;
ll n;

ll facto(ll x){
    ll res = 1, i;
    for(i = 2; i<=x; i++){
        res = ((res%MOD) * (i%MOD))%MOD;
    }

    return res;
}

int main()
{
    //OJ;
    ll x, pos;
    cin >> n >> x >> pos;
    ll smaller = x-1;
    ll greater = n-x;
    ll sum = 1;
    ll space = n-1;
    ll l =0 ;
    ll r = n;
    
    while(l<r){
        ll mid = (l+r)/2;
        if(mid == pos){
            l = mid+1;
        } else if(mid > pos){
            sum = ((sum%MOD) * (greater%MOD))%MOD;
            greater--;
            space--;
            r = mid;
        } else {
            sum = ((sum%MOD) * (smaller%MOD))%MOD;
            smaller--;
            space--;
            l = mid+1;
        }
    }

    if(l>0 && (l-1) == pos){
        sum = ((sum%MOD) * (facto(space)%MOD))%MOD;
    } else {
        sum = 0;
    }

    cout << sum << endl;

    return 0;
}