#include <iostream>
#include <vector>
#include<set>
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
        int n, k;
        cin >> n >> k;
        set<int> s;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                if(i+j==k){
                    s.insert(i);
                }
            }
        }

        vector<int> ans;
        for(int i=1; i<=n; i++){
            if(s.find(i)==s.end() && i!=k){
                ans.push_back(i);
            }
        }

        cout << ans.size() << endl;
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}