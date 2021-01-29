#include <iostream>
#include<algorithm>
#include<climits>
#include<vector>
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
        long long int n, k;
        cin >> n >> k;
        vector<long long int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        vector<long long int> parr(n);
        parr[0] = arr[0];
        for(int i=1; i<n; i++){
            parr[i] = parr[i-1]+arr[i];
        }

        long long int ans = 0;
        for(int i=1; i<n ; i++){
            parr[i-1]+=ans;
            long long int d = arr[i]*100;
            if(d>k*parr[i-1]){
                long long int calculatedval = (arr[i]*100 - k*parr[i-1])/k;

                if((arr[i]*100 - k*parr[i-1])%k){
                    calculatedval++;
                }

                ans+= calculatedval;
            }
        }

        cout << ans << endl;
    }
    return 0;
}