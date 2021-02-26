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

#define ll long long int

int main()
{
    //OJ;
    int t;
    cin >> t;
    while(t--){
        ll p, a, b, c;
        cin >> p >> a >> b >> c;
        if(p%a==0 || p%b==0 || p%c==0){
            cout << 0 << endl;
            continue;
        }
        ll op1, op2, op3;
        ll mul = p/a;
        if(mul*a<p){
            a = (mul+1)*a;
        }
        op1 = abs(a-p);
        
        mul = p/b;
        if(mul*b<p){
            b = (mul+1)*b;
        }
        op2 = abs(b-p);
        
        mul = p/c;
        if(mul*c<p){
            c = (mul+1)*c;
        }
        op3= abs(c-p);

        cout << min(op1, min(op2, op3)) << endl;
        
    }
    return 0;
}