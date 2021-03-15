#include <iostream>
#include <vector>
#include <math.h>
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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            v[i] = a[i];
        }

        int z = 0;
        int o = 0;
        for(int i=0; i<n; i++){
            cin >> b[i];
            if(b[i] == 0){
                z++;
            } else {
                o++;
            }
        }

        bool sorted = true;
        sort(v.begin(), v.end());
        for(int i=0; i<n; i++){
            if(a[i]!=v[i]){
                sorted = false;
                break;
            }
        }

    

        if(min(z,o)>0 || sorted){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}