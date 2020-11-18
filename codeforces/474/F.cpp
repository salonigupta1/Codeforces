#include<bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int maxN=1e5+5;
int strength[maxN];
int n;

struct Node {
    int hcf = 0;
    int mini = INT_MAX;
    int how = 0;
};

Node segT[4*maxN];

Node merge(Node &l, Node &r){
    Node node = l;
    node.hcf = __gcd(l.hcf, r.hcf);
    if(r.mini < node.mini){
        node.mini = r.mini;
        node.how = r.how;
    } else if(r.mini == node.mini){
        node.how+= r.how;
    }

    return node;
}

void build(int l, int r, int idx){
    if(l==r){
        segT[idx].hcf = segT[idx].mini = strength[l];
        segT[idx].how = 1;
        return;
    }

    int mid = (l+r)/2;
    build(l, mid, 2*idx);
    build(mid+1, r, 2*idx+1);

    segT[idx] = merge(segT[2*idx], segT[2*idx+1]);
}

Node query(int idx, int l, int r, int ql, int qr){
    if(qr<l || ql>r || ql>qr){
        return Node();
    }

    if(l>=ql && r<=qr){
        return segT[idx];
    }

    int mid = (l+r)/2;
    Node left = query(2*idx, l, mid, ql, qr);
    Node right = query(2*idx+1, mid+1, r, ql, qr);
    return merge(left, right);
}

int main()
{
    //OJ;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> strength[i];
    }
    build(1, n, 1);
    int t;
    cin >> t;
    while(t--){
        int ql, qr;
        cin >> ql >> qr;
        int answ = qr-ql+1;
        Node ans = query(1, 1, n, ql, qr);
        if(ans.mini == ans.hcf){
            answ-=ans.how;
        }

        cout << answ << endl;
    }
    return 0;
}