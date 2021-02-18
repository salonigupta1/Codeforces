#include <iostream>
#include <set>
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
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        multiset<int> m;
        for(int i=1; i<=n; i++){
            m.insert(i);
        }

        vector<pair<int, int>> ans;
        for(int i=0; i<n-1; i++){
            auto it = m.end();
            it--;
            int a = *it;
            m.erase(it);
            it = m.end();
            it--;
            int b = *it;
            m.erase(it);
            m.insert((a+b+1)/2);
            ans.push_back({a, b});
        }

        cout << *m.begin() << endl;
        for(int i=0; i<ans.size(); i++){
            cout << ans[i].first << " " << ans[i].second << endl;
        }

    }
    return 0;
}