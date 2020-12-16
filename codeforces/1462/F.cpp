#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<map>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    //code begins from here//
    long long int n;
    cin >> n;
    vector<pair<long long int, long long int>> L, R;
    pair<long long int, long long int> seg[n];
    for(int i=0;i< n; i++)
    {
        long long int l, r;
        cin >> l >> r;
        seg[i] = {l, r};
        L.emplace_back(make_pair(l, i));
        R.emplace_back(make_pair(r, i));
    }
    sort(L.begin(), L.end());
    sort(R.begin(), R.end());
    long long int ans = LLONG_MAX;
    for(int i=0;i<n; i++)
    {
        pair<long long int,long long int> l = {seg[i].first, -1};
        pair<long long int,long long int> r = {seg[i].second, LLONG_MAX};
        long long int cnt = 0;
        cnt += upper_bound(R.begin(), R.end(), l) - R.begin();
        cnt += L.end() - upper_bound(L.begin(), L.end(), r);
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}

int main()
{
   // OJ;
    long long int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}