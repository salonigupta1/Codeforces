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
   // OJ;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int min_ = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            min_ = min(min_, arr[i]);
        }

        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]> min_){
                count++;
            }
        }


        cout <<count << endl;

    }
    return 0;
}