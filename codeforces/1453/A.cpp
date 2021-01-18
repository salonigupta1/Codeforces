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
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<int> s;
        int a;
        for(int i=0; i<n; i++){
            cin >> a;
            s.insert(a);
        }      
        int ans = 0;
        for(int i=0; i<m; i++){
            cin >> a;
            if(s.find(a)!=s.end()){
                ans++;
            }
        }  
        cout << ans << endl;
    }
    return 0;
}