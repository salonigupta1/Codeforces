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
        int n;
        cin >> n;
        string s = "989";
        string s1 = "0123456789";
        int x =3;
        string ans;
        for(int i=0; i<n; i++){
            if(i<x){
                ans+= s[i];
            } else {
                break;
            }
        }

        n-=x;
        for(int i=0; i<n; i++){
            ans+= s1[i%10];
        }

        cout << ans << endl;
    }
    return 0;
}