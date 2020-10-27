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
    int n;
    cin >> n;
    if(n%4 == 0 || n%7 == 0|| n%44==0 || n%77==0 || n%74==0 || n%47==0 || n%444==0 || n%474==0 || n%447==0 ){
        cout << "YES" << endl;
        return 0;
    }
    string str = to_string(n);
    for(int i=0; i<str.length(); i++){
        if(str[i] == '7' || str[i] =='4'){
            continue;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

}