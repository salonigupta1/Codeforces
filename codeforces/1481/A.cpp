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
   // OJ;
    int t;
    cin >> t;
    while(t--){
        int dx, dy;
        cin >> dx >> dy;
        string s;
        cin >> s;
        int cr=0, cl=0, cu=0, cd=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'R'){
                cr++;
            } else if(s[i] == 'U'){
                cu++;
            } else if(s[i] == 'L'){
                cl++;
            } else if(s[i] == 'D'){
                cd++;
            }
        }
        bool rx = false;
        bool ry = false;
        if(dx<0 && (-1*dx)<=cl){
            rx = true;
        }

        if(dx>=0 && dx<=cr){
            rx = true;
        }

        if(dy>=0 && dy<=cu){
            ry = true;
        }

        if(dy<0 && (-1*dy)<=cd){
            ry = true;
        }

        if(rx && ry){
            cout << "YES" << endl;
        } else {
            cout << "NO"  << endl;
        }

    }
    
    return 0;
}