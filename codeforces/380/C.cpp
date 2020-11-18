#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int

string s;
int n;
struct Node {
    int ans;
    int leftP;
    int rightP;
}tree[4000009];


Node merge(Node x, Node y){
    Node ret;
    int match = min(x.leftP, y.rightP);
    ret.leftP = x.leftP+ y.leftP - match;
    ret.rightP = x.rightP+ y.rightP - match;
    ret.ans = x.ans + y.ans + match;
    return ret;
}

void build(int node, int l, int r){
    if(l==r){
		tree[node]={0,(s[l]=='('),(s[l]==')')};
		return;
	}
	build(node*2,l,(l+r)/2);
	build(node*2+1,(l+r)/2+1,r);
	tree[node]=merge(tree[node*2],tree[node*2+1]);
}

Node query(int node,int l,int r,int s,int e){
	if(l >= s && r <= e)
        return tree[node];
	if((l+r)/2 >= s && (l+r)/2+1 <= e)
        return merge(query(node*2,l,(l+r)/2,s,e),query(node*2+1,(l+r)/2+1,r,s,e));
	else if((l+r)/2 >= s)
        return query(node*2,l,(l+r)/2,s,e);
	else
        return query(node*2+1,(l+r)/2+1,r,s,e);
}


int main()
{
    //OJ;
    cin >> s;
    n = (int)s.size();
    build(1, 0, n-1);
    int q;
    cin >> q;
    while(q--){
        int ql, qr;
        cin >> ql >> qr;
        ql--;
        qr--;
        cout << 2*query(1, 0, n-1, ql, qr).ans << endl;
    }
    return 0;
}