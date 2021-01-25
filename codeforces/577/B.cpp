#include <iostream>
#include <vector>
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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> rem(m+1, vector<int>(m, 0));
    int last = min(n, m);
    for(int i=1; i<=last; i++){
        int ele;
        cin >> ele;
        for(int tem = 0; tem <m; tem++){
            if(rem[i-1][tem]){
                int after = (tem+ele)%m;
                rem[i][after] = true;
                rem[i][tem] = true;
            }
        }

        rem[i][ele%m] = true;
    }

    cout << (n > m || rem[last][0] ? "YES" : "NO") << endl;

    return 0;
}