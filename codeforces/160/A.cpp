#include <iostream>
#include<string>
#include<vector>
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
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+= arr[i];
    }

    sort(arr.rbegin(), arr.rend());
    int minSum = 0;
    int minCoins = 0;
    for(int i=0; i<n; i++){
        minSum += arr[i];
        minCoins++;
        if(minSum > (sum-minSum)){
            cout << minCoins << endl;
            return 0;
        }

    }
    return 0;
}