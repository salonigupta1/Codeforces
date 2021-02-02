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
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int curr = 0;
        int i = 1;
        while(curr<x){
            curr+= i;
            i++;
        }

        if(curr == x+1){
            cout << i << endl;
        } else {
            cout << i-1 << endl;
        }
    }
    return 0;
}