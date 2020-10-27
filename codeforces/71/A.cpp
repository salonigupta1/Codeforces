#include <iostream>
#include<string>
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
    int n;
    cin >> n;
    while(n--){
        string s1;
        cin >> s1;
        if(s1.length() <= 10){
            cout << s1 << endl;
        } else {
            int rem = s1.length()-2;
            cout << s1[0]<< rem << s1[rem+1] << endl;
        }
    }
    return 0;
}