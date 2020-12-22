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
    int n,x;
    cin >> n;
    int presum[7];
    cin >> presum[0];
    for(int i=1; i<7; i++){
        cin >> x;
        presum[i] = presum[i-1]+x;
    }

    n = (n - 1) % presum[6] + 1;
    for(int i=0; i<7; i++){
        if(presum[i]>=n){
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}