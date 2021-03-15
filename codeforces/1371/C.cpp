#include <iostream>
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
    ll t;
    cin >> t;
    while(t--){
        ll a, b, n, m;
        cin >> a >> b >> n >> m;
        if(m<=min(a, b) && (m+n)<=(a+b)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

               
        
    }
    return 0;
}