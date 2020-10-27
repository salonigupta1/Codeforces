#include <iostream>
#include<string>
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
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i'){
            continue;
        }
        cout << "." << s[i];
    }

    return 0;
}