#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
#include <algorithm>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int
 

int main()
{
    //OJ;
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        vector<ll> arr(n);
        unordered_map<ll, vector<ll>> map;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            map[arr[i]%m].push_back(arr[i]);
        }
        
        int ans = 0;
        for(ll i=1; i<m; i++){
            if(map.find(m-i)!=map.end() && map.find(i)!=map.end()){
                ll first = map[i].size();
                ll second = map[m-i].size();
                if(first == second){
                    ans+=1;
                } else if(first < second){
                    ans+= (second-(first+1))+1;
                } else if(second<first){
                    ans+= (first-(second+1))+1;
                }
                map.erase(i);
                map.erase(m-i);
                
            } else {
                ans+= map[i].size();
            }
        }

        if(map.find(0)!=map.end()){
            ans++;
        }

        cout << ans << endl;
        

    }
    return 0;
}