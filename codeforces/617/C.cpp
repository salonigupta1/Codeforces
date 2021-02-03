#include <iostream>
#include<vector>
#include<math.h>
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

ll finddis(ll a, ll b, ll c, ll d){
    ll x = abs(a-c);
    ll y = abs(b-d);
    return (x*x) + (y*y);
}

int main()
{
   // OJ;
    ll n, x0, y0, x1, y1;
    cin >> n >> x0 >> y0 >> x1 >> y1;
    vector<ll> r1(n);
    vector<ll> r2(n);
    ll maxr1 = 0;
    ll maxr2 = 0;
    ll a,b;
    for(ll i=0; i<n; i++){
        cin >> a >> b;
        r1[i] = finddis(x0, y0, a, b);
        r2[i] = finddis(x1, y1, a, b);
        maxr1 = max(maxr1, r1[i]);
        maxr2 = max(maxr2, r2[i]);
    }

    ll ans = min(maxr1,maxr2);
    for(ll i=0;i<n;i++)
    {
        maxr1=r1[i];
        maxr2=0;
        for(ll j=0;j<n;j++)
        {
            if(r1[j]>maxr1) maxr2=max(maxr2,r2[j]);
        } 
        ans=min(ans,maxr1+maxr2);
    }
        

    cout << ans << endl;
    return 0;
}