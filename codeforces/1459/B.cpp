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
    ll n;
    cin >> n;
    if(n%2==1){
        ll dotes = 1;
        ll lines = 0;
        for(ll i=1; i<=n; i+=2){
            dotes++;
            lines++;
        }

        cout << 2*dotes*lines << endl;
    } else {
        ll dotes = 1;
        ll lines = 1;
        for(ll i=1; i<=n; i+=2){
            dotes++;
            lines++;
        }
        cout << dotes*lines << endl;
    }
    return 0;
}