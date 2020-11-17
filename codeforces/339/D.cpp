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

struct Node
{
    ll value;
    ll level;
};

const ll MX = ((1 << 17) + 1);
struct Node tree[4*MX];

ll ar[MX];
ll n;

void buildTree(ll s =0, ll e = ((1<<n)-1), ll idx = 1){
    if(s>e){
        return;
    }

    if(s == e){
        tree[idx].level = 1;
        tree[idx].value = ar[s];
        return;
    }

    ll m  = (s+e)/2;
    buildTree(s, m, 2*idx);
    buildTree(m+1, e, 2*idx+1);

    tree[idx].level = tree[2*idx].level+1;
    if(tree[idx].level & 1){
        tree[idx].value = tree[2*idx].value ^ tree[2*idx+1].value;
    } else {
        tree[idx].value = tree[2*idx].value | tree[2*idx+1].value;
    }

}

void pointUpdate(ll ind, ll val, ll s=0, ll e = ((1<<n)-1), ll idx = 1){
    if(s>e){
        return;
    }

    if(s==e){
        tree[idx].value = val;
        return;
    }

    ll mid = (s+e)/2;
    if(ind >= s && ind <=mid){
        pointUpdate(ind, val, s, mid, 2*idx);
    } else {
        pointUpdate(ind, val, mid+1, e, 2*idx+1);
    }

    if(tree[idx].level & 1){
        tree[idx].value = tree[2*idx].value ^ tree[2*idx+1].value;
    } else {
        tree[idx].value = tree[2*idx].value | tree[2*idx+1].value;
    }
}

int main()
{
    //OJ;
    ll q;
    cin >> n >> q;
    for(ll i=0; i<(1<<n); i++){
        cin >> ar[i];
    }
    buildTree();
    ll ind, val;
    while(q--){
        cin >> ind >> val;
        ind--;
        pointUpdate(ind, val);
        cout << tree[1].value << endl;
    }
    return 0;
}