#include <iostream>
#include<math.h>
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int ans = 0;
        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1]){
                count++;
            }
        }

        cout << ceil(count/2.0) << endl;
    }
    return 0;
}