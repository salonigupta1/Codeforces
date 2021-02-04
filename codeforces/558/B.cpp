#include <iostream>
#include<vector>
#include<unordered_map>
#include <algorithm>
#include <map>
#include<climits>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

struct datas {
    int count = 0;
    int l = 1000000;
    int r = -1;
};

int main()
{
    //OJ;
    int n, x;
    cin >> n;
    map<int, datas> m;
    for(int i=0; i<n; i++){
        cin >> x;
        m[x].count++;
        m[x].l = min(i, m[x].l);
        m[x].r = max(i, m[x].r);
    }

    datas fs;
    int mx = 0, ms = 0;
    auto p = m.begin();
    while(p!=m.end()){
        datas d = p->second;
        if(d.count>mx){
            mx = d.count;
            fs = d;
            ms = d.r-d.l;
        } else if(d.count == mx){
            if(d.r-d.l<ms){
                mx = d.count;
                ms = d.r-d.l;
                fs = d;
            }
        }
        p++;
    }

    cout << fs.l+1 << " " << fs.r+1 << endl;

}