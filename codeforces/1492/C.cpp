#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    unordered_map<char, vector<int>> map;
    for(int i=0; i<n; i++){
        map[s[i]].push_back(i);
    }

    int ans = 0;
    int abhi = -1;
    vector<int> maxm(m);
    vector<int> minm(m);
    for(int i=0; i<m; i++){
        int x = upper_bound(map[t[i]].begin(), map[t[i]].end(), abhi)-map[t[i]].begin();
        int prevmin = map[t[i]][x];
        minm[i] = prevmin;
        abhi = prevmin;
    }


    for(auto &x: map){
        for(auto &y: x.second){
            y= -y;
        }

        sort(x.second.begin(), x.second.end());
    }

    abhi = -n-1;
    for(int i=m-1; i>=0; i--){
        int x = upper_bound(map[t[i]].begin(), map[t[i]].end(), abhi)-map[t[i]].begin();
        int prevmin = map[t[i]][x];
        maxm[i] = -prevmin;
        abhi = prevmin;
    }

    for(int i=1; i<m; i++){
        ans = max(ans, maxm[i]-minm[i-1]);
    }

    cout << ans << endl;



    return 0;
}