#include <iostream>
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = "2020";
        int i = 0;
        int j = 3;
        int k = 0;
        int l = s.size()-1;
        bool flag = false;
        while(k<=l && i<=j){
            if(s[k] == res[i]){
                k++;
                i++;
            } else if(s[l] == res[j]){
            
                l--;
                j--;
            } else {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }

        if(!flag){
            cout << "YES" << endl;
        }
    }
    return 0;
}