#include <iostream>
#include <vector>
#include <algorithm>
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
   // OJ;
    ll t;
    cin >> t;
    while(t--){
        ll n, W;
        cin >> n >> W;
        vector<pair<ll, ll>> weights(n);
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            weights[i].first = x;
            weights[i].second = i+1;
        }

        ll sum = 0;
        ll minReq = ceil((double)W/(double)2);
        sort(weights.begin(), weights.end());
        vector<ll> ans;
        for(ll i=0; i<n; i++){
            ll currEle = weights[i].first;
            ll index = weights[i].second;
            ll test = sum+currEle;

            if(2*test<W){
                sum+=currEle;
                ans.push_back(index);
            } else if(W<= 2*test && test<=W){
                sum+= currEle;
                ans.push_back(index);
                break;
            } else if(currEle<=W){
                sum = currEle;
                ans = vector<ll>(1, index);
                break;
            } else {
                ans = vector<ll>(0);
                break;
            }
        }

        if(W<= 2*sum && sum<=W && ans.size()>0){
            cout << ans.size() << endl;
            for(ll p=0; p<ans.size(); p++){
                cout << ans[p] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
        
    }
    return 0;
}