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
    FIO;
    long long int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        cout << n.size() << endl;
    }
    return 0;
}