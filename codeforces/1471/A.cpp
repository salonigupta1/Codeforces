#include <iostream>
#include<algorithm>
#include<climits>
#include<math.h>
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
        long long int n, x;
        cin >> n >> x;
        long long int* arr = new long long int[n];
        long long int sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+= arr[i];
        }

        long double sum1 = ceil((double)sum/(double)x);
        long double sum2 = 0;
        for(long long int i=0; i<n; i++){
            sum2+= (ceil((double)arr[i]/(double)x));
        }

        long long int maxA = max(sum1, sum2);
        long long int minA = min(sum1, sum2);
        cout << minA << " " << maxA << endl;
    }
    return 0;
}