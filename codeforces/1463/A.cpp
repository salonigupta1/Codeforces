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

int main()
{
   // OJ;
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int sum = a+b+c;
        long long int mint = min(a,  min(b, c));
        if(sum%9==0 && mint>=sum/9){
            cout << "YES" << endl;
        } else {
            cout <<"NO" << endl;
        }
    }
    return 0;
}