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
        string s;
        cin >> s;
        int n = s.size();
        if(n==1){
            cout << 0 << endl;
        } else if(n==2){
            if(s[0] == s[1]){
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            for(int i=1; i<n; i++){
                if(s[i] == s[i-1] || (i-2>=0 && s[i] == s[i-2])){
                    s[i] = '*';
                }
            }
            int ans = 0;
            for(int i=0; i<n; i++){
                if(s[i] == '*'){
                    ans+=1;
                }
            }

            cout << ans << endl;
        }
    }
    return 0;
}