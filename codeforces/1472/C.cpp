#include <iostream>
#include<algorithm>
#include<climits>
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
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int* arr = new long long int[n];
        for(long long int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(long long int i=n-2; i>=0; i--){
            if(arr[i]+i<n){
                arr[i]+= arr[arr[i]+i];
            }
        }

        long long int ans = LONG_MIN;
        for(long long int i=0; i<n; i++){
            ans = max(ans, arr[i]);
        }

        cout << ans << endl;
    }
    return 0;
}