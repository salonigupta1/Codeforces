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
        int i=0;
        int j = 1;
        int n = s.size();
        bool Alice = true;
        for(int i=0; i<n; i++){
            if(Alice){
                if(s[i]!='a'){
                    s[i] = 'a';
                } else {
                    s[i] = 'b';
                }
            } else {
                if(s[i] != 'z'){
                    s[i] = 'z';
                } else {
                    s[i] = 'y';
                }
            }

            Alice = !Alice;
        }

        cout << s << endl;
    }
    return 0;
}