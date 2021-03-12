#include <iostream>
#include <vector>
#include <string>
#include <queue>
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
        string s;
        cin >> s;
        int n = s.size();
        long long int total = 0;
        long long int ans = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='+'){
                total++;
            } else {
                total--;
            }

            if(total<0){
                ans+= (i+1);
                total++;
            }
        }

        cout << ans + s.size() << endl;

    }
    return 0;
}