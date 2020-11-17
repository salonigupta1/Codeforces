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

const int MX = 300001;
int segT[4*MX+1];
int n;

void update(int L, int R, int win, int pos=1, int s=1, int e=n){
    if(L>e || R<s){
        return;
    }
    if(segT[pos]!=0){
        return;
    }

    if(L<=s && R>=e){
        segT[pos] = win;
        return;
    }

    int mid = (s+e)/2;
    update(L, R, win, 2*pos, s, mid);
    update(L, R, win, 2*pos+1, mid+1, e);

}

int query(int l, int r, int idx=1, int s=1, int e=n){
    if(l>r){
        return 0;
    }

    if(l==s && r==e){
        return segT[idx];
    }

    int mid = (s+e)/2;
    int x, y;
    x = query(l, min(r, mid), 2*idx, s, mid);
    y = query(max(l, mid+1), r, 2*idx+1, mid+1, e);
    if(x==0 && y==0){
        return segT[idx];
    }

    return max(x, y);
}

int main()
{
    //OJ;
    int q;
    cin >> n >> q;
    for(int i=0; i<q; i++){
        int l, r, win;
        cin >> l >> r >> win;
        update(l, win-1, win);
        update(win+1, r, win);
    }

    for(int i=1; i<=n; i++){
        cout << query(i, i) << " ";
    }
    cout << endl;
    return 0;
}