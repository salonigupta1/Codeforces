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
        int n;
        cin >> n;
        vector<int> red(n);
        for(int i=0; i<n; i++){
            cin >> red[i];
        }

        int m;
        cin >> m;
        vector<int> blue(m);
        for(int i=0; i<m; i++){
            cin >> blue[i];
        }

        int maxSumRed = 0;
        int maxSumBlue = 0;
        int tempR = 0;
        int tempB = 0;
        for(int i=0; i<n; i++){
            tempR+= red[i];
            maxSumRed = max(maxSumRed, tempR);
        }

        for(int i=0; i<m; i++){
            tempB+= blue[i];
            maxSumBlue = max(maxSumBlue, tempB);
        }

        cout << maxSumBlue + maxSumRed << endl;
        
    }
    return 0;
}