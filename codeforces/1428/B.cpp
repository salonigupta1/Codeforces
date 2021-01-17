#include <iostream>
#include<set>
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
        set<int> st;
        int x = 0, y = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '-'){
                st.insert(i);
                st.insert((i+1)%n);
            } else if(s[i] == '<'){
                x++;
            } else {
                y++;
            }
        }

        if(x==0 || y==0){
            cout << n << endl;
        } else

        cout << st.size() << endl;
    }
    return 0;
}