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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = k;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                count = 0;
            } else {
                count++;
            }

            if(count == 2*k+1){
                ans++;
                count = k;
            }
        }

        if(count>k){
            ans++;
        }

        cout << ans << endl;

    }
    return 0;
}