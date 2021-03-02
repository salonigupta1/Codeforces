#include <iostream>
#include <vector>
#include <stack>
#include <string>
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
    cin  >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        char first = s[0];
        int countfirst = 0;
        int countlast = 0;
        int countmid = 0;
        for(int i=0; i<n; i++){
            if(s[i] == s[0]){
                countfirst++;
            } else if(s[i] == s[n-1]){
                countlast++;
            } else {
                countmid++;
            }
        }

        if(s[0] == s[n-1]){
            cout << "NO" << endl;
            continue;
        }


        string type;
        if(countfirst+countmid == countlast){
            type = "open";
        } else {
            type = "close";
        }

        stack<int> stk;
        bool found = false;
        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i] == s[0]){
                stk.push(s[i]);
            } else if(s[i] == s[n-1]){
                if(stk.empty()){
                    cout << "NO" << endl;
                    found = true;
                    break;
                }
                stk.pop();
            } else {
                if(type == "open"){
                    stk.push(s[i]);
                } else {
                    if(stk.empty()){
                        cout << "NO" << endl;
                        found = true;
                        break;
                    }
                    stk.pop(); 
                }
            }
        }

        if(!found && stk.size()!=0){
            cout << "NO" << endl;
        }
        else if(found == false){
            cout << "YES" << endl;
        }

    }
    return 0;
}