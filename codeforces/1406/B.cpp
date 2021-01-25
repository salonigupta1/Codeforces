#include <iostream>
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
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int* arr = new long long int[n];
        for(long long int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n);
        long long int ans = -1e18;
        for(int i=0; i<5; i++){
            long long int aa, bb, cc, dd, ee;
            ee = (n-1+i)%n;
            dd = (n-2+i)%n;
            cc = (n-3+i)%n;
            bb = (n-4+i)%n;
            aa = (n-5+i)%n;

            long long int val = arr[ee]*arr[dd]*arr[cc]*arr[bb]*arr[aa];
            ans = max(val, ans);

        }

        cout << ans << endl;

    }
    return 0;
}