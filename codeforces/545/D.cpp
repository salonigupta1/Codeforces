#include <iostream>
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
    long long int n;
    cin >> n;
    vector<long long int> arr(n);
    for(long long int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    long long int ans = 0;
    int waitTime = arr[0];
    ans++;
    for(int i=1; i<n; i++){
        if(waitTime<=arr[i]){
            ans++;
            waitTime+= arr[i];
        }
    }

    cout << ans << endl;
    return 0;
}