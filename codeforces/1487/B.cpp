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

int main()
{
    //OJ;
    long long int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        if(n%2==0){
            cout << (k%n==0 ?n: k%n) << endl;
        } else {
            long long int mid = n/2;
            long long int a;
            long long int b = (k%(mid*n)) == 0?mid*n: (k%(mid*n));
            a = b%mid==0? (b/mid)-1: b/mid;
            b = b%mid == 0? mid: b%mid;
            long long int ans = a+b+(a*mid);
            ans = ans%n==0?n: ans%n;
            cout << ans << endl;

        }
    }
    return 0;
}