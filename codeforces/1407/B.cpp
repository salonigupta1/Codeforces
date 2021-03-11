#include<bits/stdc++.h>
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
        int mi = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mi = (arr[i] > arr[mi] ? i : mi);
        }
                

        vector<int> ans;
        ans.push_back(arr[mi]);
        arr[mi] = 0;
        int cg = ans[0];
        for(int i=1; i<n; i++){
            int cans = 0;
            int ci = 0;
            for(int j=0; j<n; j++){
                if(arr[j] && __gcd(arr[j], cg) > cans){
                    cans = __gcd(arr[j], cg);
                    ci = j;
                }
            }
            ans.push_back(arr[ci]);
            arr[ci] = 0;
            cg = cans;
        }
        

        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;

        
    }
    return 0;
}