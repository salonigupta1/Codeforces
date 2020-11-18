#include <iostream>
#include<algorithm>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int n, q, type, id;
const int MX = 100005;
int a[MX], b[MX], x[MX], y[MX], k[MX], t[4*MX];

void change(int ql, int qr,int x, int pos, int l, int r){
    if(ql<=l && qr>=r){
        t[pos] = x;
    }
    else if(ql<=r && qr>=l){
        int mid = (l+r)/2;
        change(ql, qr, x, 2*pos, l, mid);
        change(ql, qr, x, 2*pos+1, mid+1, r);
    }

    return;
}

int query(int p, int pos, int l, int r){
    if(l==r){
        return t[pos];
    }

    int mid = (l+r)/2, trans;
    if(l<=p && p<=mid){
        trans = query(p, 2*pos, l, mid);
    } else {
        trans = query(p, 2*pos+1, mid+1, r);
    }

    trans = max(trans, t[pos]);
    return trans;
}

int main()
{
    //OJ;
    FIO;
    cin >> n >> q;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        cin >> b[i];
    }
    for(int i=1; i<=q; i++){
        cin >>type;
        if(type==1){
            cin >> x[i] >> y[i] >> k[i];
            change(y[i], y[i]+k[i]-1, i, 1, 1, n);
        } else {
            cin >> id;
            int j = query(id, 1, 1, n);
            if(j==0){
                cout << b[id] << endl;
            } else {
                cout << a[id+x[j]-y[j]] << endl;
            }
        }
    }
    return 0;
}