#include <iostream>
#include <string>
#include <stack>
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
        stack<char> stack;
        for(int i=0; i<n; i++){
            if(s[i] == 'B'){
                if(!stack.empty()){
                    stack.pop();
                } else {
                    stack.push(s[i]);
                }
            } else {
                stack.push(s[i]);
            }
        }

        cout << stack.size() << endl;
    }
    return 0;
}