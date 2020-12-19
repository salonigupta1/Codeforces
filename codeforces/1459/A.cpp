#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
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
    FIO;
    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int red = 0, blue = 0;
        for(int i=0; i<n; i++){
            if(s1[i]>s2[i]){
                red++;
            } else if(s2[i]>s1[i]){
                blue++;
            }
        }

        if(red>blue){
            cout << "RED" << endl;
        } else if(blue>red){
            cout << "BLUE" << endl;
        }  else {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}
