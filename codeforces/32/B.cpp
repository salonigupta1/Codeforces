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
    string s;
    cin >> s;
    string ans = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] == '.'){
            ans+= "0";
        } else if(s[i] == '-'){
            if(s[i+1] == '.'){
                ans+= "1"; 
            } else {
                ans+= "2";
            }
            i++;
        }
    }

    cout << ans << endl;
    return 0;
}