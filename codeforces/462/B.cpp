#include <iostream>
#include <vector>
#include <set>
#include <map>
#include<algorithm>
#include<unordered_map>
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
    long long int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, long long int> m;
    for(long long int i=0; i<n; i++){
        if(m.find(s[i]) == m.end()){
            m[s[i]] = 1;
        } else {
            m[s[i]]++;
        }
    }

    vector<long long int> v;
    for(auto it = m.begin(); it!=m.end(); it++){
        auto top = *it;
        v.push_back(top.second);
    }

    sort(v.rbegin(), v.rend());
    

    long long int total = k;
    long long int i = 0;
    long long int ans = 0;
    while(total!=0){
        if(v[i]<=total){
            ans+= (v[i]*v[i]);
            total-=v[i];
            i++;
        } else {
            ans+= total*total;
            total = 0;
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}