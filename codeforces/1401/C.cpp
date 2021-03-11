#include <bits/stdc++.h>
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
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> ans(n);
        int minE = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            ans[i] = arr[i];
            minE = min(minE, arr[i]);
        }

        sort(ans.begin(), ans.end());
        bool found = false;
        for(int i=0; i<n; i++){
            if(arr[i]!=ans[i] && (arr[i]%minE!=0 || ans[i]%minE!=0)){
                found = true;
                break;
            }
        }

        if(found){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}