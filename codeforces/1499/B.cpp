#include <iostream>
#include <vector>
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
        int lastone = 0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1] && s[i] == '1'){
                lastone = i+1;
                break;
            }
        }

        if(lastone == 0){
            cout << "YES" << endl;
            continue;
        }

        bool found = false;
        for(int i=lastone; i<s.size()-1; i++){
            if(s[i]==s[i+1] && s[i]=='0'){
                found = true;
                break;
            }
        }

        if(found && lastone!=0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}