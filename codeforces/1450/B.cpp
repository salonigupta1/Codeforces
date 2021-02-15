#include <iostream>
#include<vector>
#include<unordered_map>
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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);
        int x,y;
        for(int i=0; i<n; i++){
            cin >> v[i].first >> v[i].second;
        }

        int ans = -1;
        for(int i=0; i<n; i++){
            int mx = 0;
            for(int j=0; j<n; j++){
                mx = max(mx, abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second));
            }
            if(mx<=k){
                ans = 1;
            }
        }

        cout << ans << endl;

    }
    return 0;
}