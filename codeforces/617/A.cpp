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
    int num;
    cin >> num;
    int x = num/5;
    if(num%5!=0){
        cout << x+1 << endl;
    } else {
        cout << x << endl;
    }
    return 0;
}