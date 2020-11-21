#include <iostream>
#include<string>
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
   // OJ;
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        int cnt0 = -1, ind0 = -1;
        int cnt1 = -1, ind1 = -1;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                if(ind1 == -1){
                    ind1 = i;
                } else {
                    cnt1 = i;
                }
            } else {
                if(ind0 == -1){
                    ind0 = i;
                } else {
                    cnt0 = i;
                }
            }
        }

        if(cnt1 == -1){
            cnt1 = ind1;
        }

        if(cnt0 == -1){
            cnt0 = ind0;
        }
        
        while(q--){
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            if((r==cnt1 || r == cnt0) &&(l == ind0 || l==ind1)){
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}