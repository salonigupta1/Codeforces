#include <iostream>
#include <vector>
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
        string a, b;
        cin >> a >> b;
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                ans.push_back(i+1);
                ans.push_back(1);
                ans.push_back(i+1);
            }
        }

        cout << ans.size() << " ";
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }

        cout << endl;
    }
    return 0;
}