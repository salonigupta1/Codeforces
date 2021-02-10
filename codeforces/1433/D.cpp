#include <iostream>
#include <vector>
#include <stack>
#include <set>
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
    //OJ;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n+1);
        set<int> s;
        map<int, vector<int>> m;
        int x;
        for(int i=1; i<=n; i++){
            cin >> x;
            s.insert(x);
            m[x].push_back(i);            
        }    

        if(s.size()<=1){
            cout << "NO" << endl;
            continue;
        } else {
            cout << "YES" << endl;
            vector<vector<int>> ar;
            for(auto i: m){
                ar.push_back(i.second);
            }

            for(int i=1; i<ar.size(); i++){
                for(int j=0; j<ar[i].size(); j++){
                    cout << ar[0][0] << " " << ar[i][j] << endl;
                }
            }

            for(int j=1; j<ar[0].size(); j++){
                cout << ar[1][0] << " " << ar[0][j] << endl;
            }
        }
    }
    return 0;
}