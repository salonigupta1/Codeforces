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
    int w;
    cin >> w;
    if(w%2!=0 || w<3){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}