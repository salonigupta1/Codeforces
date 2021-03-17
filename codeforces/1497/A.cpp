#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        map<int, int> m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }


        vector<int> ans;
        for(auto x: m){
            ans.push_back(x.first);
        }

        for(auto x: m){
            if(x.second>1){
                for(int i=0; i<x.second-1; i++){
                    ans.push_back(x.first);
                }
            }
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }

        cout << endl;
    }
    return 0;
}