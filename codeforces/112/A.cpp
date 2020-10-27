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
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    //cout << s1 << " " << s2 << endl;
    for(int i=0; i<s1.length(); i++){
        if(s1[i] < s2[i]){
            cout << -1 << endl;
            return 0;
        } else if(s1[i] > s2[i]){
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}