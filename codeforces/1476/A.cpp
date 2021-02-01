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
    long long int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        if(n==1){
            cout << k << endl;
            continue;
        }
        if(n==k){
            cout << 1 << endl;
            continue;
        }

        if(n<k){
            int a = k/n;
            int b = k%n;
            if(b!=0){
                a++;
            }
            cout << a << endl;
            continue;
        }

        else {
            int c = n/k;
            int d = n%k;
            if(d!=0){
                c++;
            }

            k*=c;
            int a = k/n;
            int b = k%n;
            if(b!=0){
                a++;
            }
            cout << a << endl;
            continue;

        }
    }
    return 0;
}