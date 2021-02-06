#include <iostream>
#include <vector>
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
        int n, m;
        cin >> n >> m;
        char c;
        vector<vector<int>> dp(n, vector<int>(m, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> c;
                if(c=='*'){
                    dp[i][j] = 1;
                }
            }
        } 

        for(int i=n-2; i>=0; i--){
            for(int j=m-2; j>0; j--){
                if(dp[i][j] && dp[i+1][j+1] && dp[i+1][j-1] && dp[i+1][j]){
                    dp[i][j] += min(dp[i+1][j+1], min(dp[i+1][j-1], dp[i+1][j]));
                }   
            }
        } 

        int maxAns = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                maxAns+= dp[i][j];
            }
        }

        cout << maxAns << endl;

    }
    return 0;
}