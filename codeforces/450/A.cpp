#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
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
    int n, m, last;
    cin >> n >> m;
    
    double t, max(0);
    for(int i=1; i<=n; i++){
        cin >> t;
        if(ceil(t/m)>=max){
            last = i;
            max = ceil(t/m);
        }
    }

    cout << last << endl;

    return 0;
}