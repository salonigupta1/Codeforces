#include <iostream>
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
   // OJ;
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    if(n!=m){
        cout << "NO" << endl;
    } else {
        vector<char> misA;
        vector<char> misB;
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                misA.push_back(a[i]);
                misB.push_back(b[i]);
            }
        }

        if(misA.size()==2){
            if(misA[1] == misB[0] && misA[0] == misB[1]){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
   
    return 0;
}