#include <iostream>
#include<vector>
#include<unordered_map>
#include<math.h>
#include <climits>
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
        int n, rowC, colC;
        cin >> n >> rowC >> colC;
        int* arr = new int[n+1];
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }

        int ans = INT_MAX;
        for(int i=2; i<=n; i++){
            if(abs(arr[i]-arr[i-1])>=2){
                ans = 0;
            } else if(abs(arr[i]-arr[i-1]) == 1){
                ans = min(ans, min(colC, rowC));
            } else if(arr[i] == arr[i-1]){
                ans = min(ans, colC+min(colC, rowC));
            }
        }

        cout << ans << endl;
    }
    return 0;
}