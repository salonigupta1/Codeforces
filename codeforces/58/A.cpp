#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    string res = "hello";
    int  j = 0;
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == res[j]){
            j++;
            count++;
        }
    }

    if(count == 5){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}