#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
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
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat[i][j];
            }
        }

        int count = 0;
        int sum = 0;
        int min_ = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]<0){
                    mat[i][j]*= -1;
                    count++;
                }
                sum+= mat[i][j];
                min_ = min(min_, mat[i][j]);
            }
        }

        if(count%2==0){
            cout << sum << endl;
        } else {
            cout << sum-2*min_ << endl;
        }

    }
    return 0;
}