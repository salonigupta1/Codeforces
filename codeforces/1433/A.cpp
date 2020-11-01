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
    //OJ;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 1;
        int add = 1;
        while(n>10){
            n = (n/10);
            add++;
            count+= add;
        }
        int ans = ((n-1)*10)  + count;
        cout << ans << endl;
    }
    return 0;
}