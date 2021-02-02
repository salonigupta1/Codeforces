#include <iostream>
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
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int ans = (a+b+c)-1;
        cout << ans << endl;
    }
    return 0;
}