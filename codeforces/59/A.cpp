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
    int lC = 0;
    int uC = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>= 65 && s[i]<=90){
            uC++;
        } else {
            lC++;
        }
    }

    if(uC > lC){
         transform(s.begin(), s.end(), s.begin(), ::toupper); 
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;
    return 0;
}