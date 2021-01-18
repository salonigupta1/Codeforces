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
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '?'){
                count++;
            }
        }
        if(s[0] == ')' || s[s.size()-1] == '(' || count%2!=0){
            cout << "NO" << endl;
        }
        else
        cout << "YES" << endl;
    }
    return 0;
}