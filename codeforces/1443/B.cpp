#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int

int main()
{
    //OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int pA, pP, flag= 0, ans=0;
        cin >> pA >> pP;
        int start = -1;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                if(start == -1){
                    start = 0;
                    flag = 0;
                    ans+=pA;
                } else {
                    ans+=min(flag*pP, pA);
                    flag=0;
                }
            } else {
                flag+=1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}