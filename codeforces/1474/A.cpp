#include <iostream>
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        string ans = s;
        char preans = (s[0]+'1');
        ans[0] = '1';
        for(int i=1; i<n; i++){
            if((s[i]+'1') != preans){
                ans[i]= '1';
            } else {
                ans[i]= '0';
            }
            preans = s[i]+ans[i];
        }

        for(int i=0; i<n; i++){
           cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}