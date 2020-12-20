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
    int n;
    cin >> n;
    while(true){
        n+=1;
        int a = n/1000;
        int b = (n/100) %10;
        int c = (n/10) %10;
        int d = n%10;

        if(a!=b && b!=c && c!=d && d!=a && a!=c && b!=d){
            break;
        }
    }

    cout << n << endl;
    return 0;
}