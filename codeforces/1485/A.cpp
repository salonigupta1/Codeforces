#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <climits>

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
        long long int a, b;
        cin >> a >> b;
        
        int ans = 0;
        int res = a+2;
        for(int i=(b<2?2-b:0); i<res; i++){
            int B = b+i;
            int num = a;
            ans = i;
            while(num){
                num = num/B;
                ans++;
            }

            if(ans<res){
                res = ans;
            }


        }


        cout << res << endl;
    }
    return 0;
}