#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
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
    int n, a, b;
    cin >> n >> a >> b;
    int b1 = 0;
    set<double> s;
    int c, d;
    for(int i=0; i<n; i++){
        cin >> c >> d;
        if(b == d){
            b1 = 1;
        } else {
            s.insert((double)(a-c)/(b-d));
        }
    }

    cout << s.size()+b1 << endl;

    

    return 0;
}