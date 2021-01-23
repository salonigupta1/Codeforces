#include <iostream>
#include <set>
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
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> A(n*m, 0);
    set<int> rem;
    for(int i=0; i<n*m; i++){
        cin >> A[i];
        rem.insert(A[i]%d);
    }
    bool possible = true;

    if(rem.size()>1){
        possible = false;
    }

    sort(A.begin(), A.end());
    int mid = A.size()/2;
    int median = A[mid];
    int ans = 0;
    for(int i=0; i<A.size(); i++){
        ans+= abs(A[i]-median)/d;
    }
    
    if(possible){
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}