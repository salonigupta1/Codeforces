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
    int x, y, z;
    int sumx = 0, sumy = 0, sumz = 0;
    for(int i=0; i<n; i++){
        cin >> x >> y >> z;
        sumx+= x;
        sumy+=y;
        sumz+=z;
    }

    if(sumx == 0 && sumy == 0 && sumz == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}