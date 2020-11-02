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
    cin >>t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int floor = 1;
        int ans = 2;
        while(n>ans){
            floor++;
            ans = ((floor-1)*x)+2;
        }

        cout << floor << endl;
    }
    return 0;
}