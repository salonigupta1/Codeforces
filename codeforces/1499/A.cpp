#include <iostream>
#include <algorithm>
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
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int w, b;
        cin >> w >> b;
        int w1 = min(k1, k2);
        int w2 = max(k1, k2)-w1;

        n = n-max(k1, k2);
        w2 = w2/2;
        if(w<=w1+w2 && b<=w2+n){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    

    
    return 0;
}