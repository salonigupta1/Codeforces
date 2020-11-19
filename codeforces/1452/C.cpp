#include <iostream>
#include<string>
#include<algorithm>
#include<stack>
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
        stack<char> sqB, cB;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                cB.push('(');
            } else if(s[i] == '['){
                sqB.push('[');
            } else if(s[i]==')' && (!cB.empty())){
                cB.pop();
                ans++;
            } else if(s[i] == ']' && (!sqB.empty())){
                sqB.pop();
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}