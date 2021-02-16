#include <iostream>
#include <math.h>
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
    int t;
    cin >> t;
    while(t--){
        long double n;
        cin >> n;
        long double lim = cbrt(n);
        bool found = false;
        for(ll i=1; i<=lim; i++){
            long double first = i*i*i;
            long double req = n-first;
            if(req == 0){
                continue;
            }
            if(ceil(cbrt(req)) == floor(cbrt(req))){
                found = true;
                break;
            }
        }

        if(found){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}