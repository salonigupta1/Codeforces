#include <iostream>
#include <vector>
#include <string>
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
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        int ans = 0;
        int cost = min(c0, c1);
        if(cost == c0){
            int count = 0;
            for(int i=0; i<n; i++){
                if(s[i] == '0'){
                    ans+= c0;
                } else {
                    count++;
                }
            }

            ans+= min(count*(h+c0), count*c1);
        } else {
            int count = 0;
            for(int i=0; i<n; i++){
                if(s[i] == '1'){
                    ans+= c1;
                } else {
                    count++;
                }
            }

            ans+= min(count*(h+c1), count*c0);
        }

        cout << ans << endl;
    }
    return 0;
}