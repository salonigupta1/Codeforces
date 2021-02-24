#include <iostream>
#include<vector>
using namespace std;
 
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
 
bool subset(vector<int> arr, int sum){
    bool dp[arr.size()+1][sum+1];
    for(int i=0; i<=arr.size(); i++){
        for(int j=0; j<=sum; j++){
            if(i==0 && j==0){
                dp[i][j] = true;
            } else if(i==0){
                dp[i][j] = false;
            } else if(j==0){
                dp[i][j] = true;
            } else {
                if(arr[i-1]<=j){
                    dp[i][j] = dp[i-1][j-arr[i-1]]|| dp[i-1][j];
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    }
 
    return dp[arr.size()][sum];
}
 
int main()
{
    //OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum+= arr[i];
        }
        if(sum%2!=0){
            cout << "NO" << endl;
            continue;
        }
        if(subset(arr, sum/2)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}