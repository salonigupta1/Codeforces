#include <iostream>
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
    ll a, b, c, x;
    cin >> a;
    if(a%2!=0){
        b = ((a*a)+1)/2;
        c = b-1;
        if(b>0 && c>0){
            cout << b << " " << c << endl;
        } else {
            cout << -1 << endl;
        }
    } else if(a>2 && a%2==0){
        b = (a*a)/4 -1;
        c = (a*a)/4 +1;
        cout << b << " " << c << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}