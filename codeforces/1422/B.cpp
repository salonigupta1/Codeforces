#include <iostream>
#include <vector>
#include <stack>
#include <math.h>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

ll fun(vector<vector<ll>> mat, ll lastRow, ll lastCol, ll i, ll j){
    ll ans = 0;
    vector<ll> poss;
    poss.push_back(mat[i][j]);
    if(lastRow!=i)
        poss.push_back(mat[lastRow][j]);
    if(lastRow!=i && lastCol!=j)
        poss.push_back(mat[lastRow][lastCol]);
    if(lastCol!=j)
        poss.push_back(mat[i][lastCol]);
    sort(poss.begin(), poss.end());
                    
    int sz = poss.size();
    for (int k = 0; k < sz; ++k)
        ans += abs(poss[k] - poss[sz / 2]); 

    return ans; 
}

int main()
{
    //OJ;
    ll t;
    cin >> t;
    while(t--){
        ll r, c;
        cin >> r >> c;
        vector<vector<ll>> mat(r, vector<ll>(c));
        for(ll i=0; i<r; i++){
            for(ll j=0; j<c; j++){
                cin >> mat[i][j];
            }
        }

       
        ll ans = 0;
        ll i=0;
        ll lastRow = r-1;
        while(i<=lastRow){
            ll lastCol = c-1;
            ll j=0;
            while(j<=lastCol){
                ans+= fun(mat, lastRow, lastCol, i, j);
                j++;
                lastCol--;                             
            }
            i++;
            lastRow--;
        }

        cout << ans << endl;

    }
    return 0;
}