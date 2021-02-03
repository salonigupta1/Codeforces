#include <iostream>
#include <vector>
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
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }

    for(int i=1; i<=n; i++){
        int firstStudent = i;
        vector<bool> vis(n+1, false);
        int next = i;
        while(!vis[next]){
            vis[next] = true;
            next = v[next];   
        }
        cout << next << " ";
    }
    return 0;
}