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
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int neg = a+b;
        int pos = c+d;
        bool f = false, s = false, t = false, fo = false;

        if(neg%2!=0){
            //negative hi hoga hmesha, positive nahi ho skta
            if(b+c>0){
                s = true;
            } 
            if(a+d>0){
                f = true;
            }
        } else {
            if(b+c>0){
                t = true;
            } 
            if(a+d>0){
                fo = true;
            }
        }

        if(f){
            cout << "Ya ";
        } else {
            cout << "Tidak ";
        }

        if(s){
            cout << "Ya "; 
        } else {
            cout << "Tidak ";
        }
        if(t){
            cout << "Ya "; 
        } else {
            cout << "Tidak ";
        }
        if(fo){
            cout << "Ya" << endl; 
        } else {
            cout << "Tidak" << endl;
        }

    }
    return 0;
}