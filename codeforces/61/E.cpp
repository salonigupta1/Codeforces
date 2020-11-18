#include <iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int
ll arr[1000005];
pair<ll, ll> tree[4000020];

pair<ll, ll> query(ll node, ll l, ll r, ll ql, ll qr){
    if(l>r || ql>qr){
        return {0, 0};
    }

    if(ql == l && qr == r){
        return tree[node];
    }

    ll m = (l+r)/2;
    pair<ll, ll> left = query(2*node, l, m, ql, min(qr, m));
    pair<ll, ll> right = query(2*node+1, m+1, r, max(ql, m+1), qr);

    return {left.first+right.first, left.second+right.second};
}

void update(ll node, ll l, ll r, ll idx, ll val){
    if(l>r){
        return;
    }

    if(l == r){
        tree[node].second = 1;
        tree[node].first = val;
        return;
    }

    ll m = (l+r)/2;

    if(idx <= m){
        update(2*node, l, m, idx, val);
    } else {
        update(2*node+1, m+1, r, idx, val);
    }

    tree[node].first = tree[2*node].first + tree[2*node+1].first;
    tree[node].second = tree[2*node].second + tree[2*node+1].second;
}

int main()
{
    //OJ;
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        ll a;
        cin >> a;
        v.push_back(a);
        arr[i] = a;
    }

    sort(v.begin(), v.end());

    //Coordinate Compression
    unordered_map<ll, ll> m;
    for(ll i=0; i<n; i++){
        m[v[i]] = i;
    }

    for(ll i=0; i<n; i++){
       arr[i] = m[arr[i]];
    }

    ll ans = 0;
    for(ll i=n-1; i>=0; i--){
        pair<ll, ll> sum = query(1, 0, n-1, 0, arr[i]-1);
        ans+= sum.first;
        update(1, 0, n-1, arr[i], sum.second);
    }
    cout << ans << endl;
    return 0;
}