#include <iostream>
#include <stack>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);



int isBalanced(string s)
{
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '?'){
            count++;
        }
    }
    if(s[0] == ')' || s[s.size()-1] == '(' || count%2!=0){
        return false;
    }

    return true;
}

int main()
{
    //OJ;
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isBalanced(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}