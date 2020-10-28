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
    cin >> t ;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> row((n*m)+1), col((n*m)+1);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int a;
                cin >> a;
                col[a] = j;
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int a;
                cin >> a;
                row[a] = j;
            }
        }

        vector<vector<int>> ans(n+1, vector<int>(m+1));
        for(int i=1; i<=(n*m); i++){
            ans[row[i]][col[i]] = i;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
}