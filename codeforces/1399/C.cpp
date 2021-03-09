#include <iostream>
#include <vector>
#include <unordered_map>
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
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int ans = INT_MIN;
        for(int s=2; s<=2*n; s++){
            int total = 0;
            for(auto j: mp){
                int first = j.first;
                int other = s-j.first;
                if(other>=1 && mp.count(other)){
                    total+= min(j.second, mp[other]);
                }
            }

            total = total/2;

            ans = max(ans, total);
        }

        cout << ans << endl;

        
    }
    return 0;
}