#include <iostream>
#include <vector>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    //OJ;
    int t;
    cin >> t;
    while(t--){
        int n, x, m;
        cin >> n >> x >> m;
        vector<pair<int, int>> v;
        int l, r;
        l = x;
        r = x;
        int L, R;
        for(int i=0; i<m; i++){
            cin >> L >> R;
            if(L<=l&& R>=l ){
                l = L;
            }
            if(R>=r && L<=r){
                r = R;
            }
        }

        cout << r-l+1 << endl;



    }
    return 0;
}