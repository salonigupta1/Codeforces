#include <iostream>
#include<vector>
#include<algorithm>
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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());
        bool flag = true;
        for(int i=0; i<n; i++){
            if(a[i]+b[i]>x){
                flag =false;
                break;
            }
        }

        if(flag){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        
    }
    return 0;
}