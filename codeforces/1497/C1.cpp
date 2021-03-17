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
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(n==4){
            cout << 2 << " " << 1 << " " << 1 << endl;
            continue;
        }
        if(n==3){
            cout << 1 << " " << 1 << " " << 1 << endl;
        } else if(n%2!=0){
            cout << 1 << " " << (n-1)/2 << " " << (n-1)/2 << endl;
        } else {
            if((n/2)%2==0){
                cout << n/2 << " " << n/4 << " " << n/4 << endl;
            } else {
                cout << 2 << " " << (n-2)/2 << " " << (n-2)/2 << endl;
            }
        }
        

    }
    return 0;
}