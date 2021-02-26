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
   // OJ;
    int t;
    cin >> t;
    while(t--){
        ll c1, c2, c3;
        cin >> c1 >> c2 >> c3;
        ll a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        c1-=a1;
        c2-=a2;
        c3-=a3;
        if(c1<0 || c2<0 || c3<0){
            cout << "NO" << endl;
            continue;
        }

        if(a4>(c1+c3)){
            cout << "NO" << endl;
            continue;
        }

        if(a4<=c1){
            c1-=a4;
        } else {
            a4-=c1;
            c1 = 0;
            c3-= a4;
        }

        if(a5>(c2+c3)){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
    return 0;
}