#include <iostream>
#include <unordered_map>
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
   // OJ;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        unordered_map<char, int> map;
        for(int i=0; i<n; i++){
            for(int j=0; j<v[i].size(); j++){
                map[v[i][j]]++;
            }
        }

        bool found = false;
        for(auto x: map){
            if(x.second%n!=0){
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