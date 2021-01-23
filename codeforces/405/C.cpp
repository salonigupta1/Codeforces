#include <iostream>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int arr[1100][1100];

int main()
{
    //OJ;
    FIO;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    for(int i=1; i<=n; i++){
        ans^= arr[i][i];
    }

    int q;
    cin >> q;
    while(q--){
        int t, x;
        cin >> t;
        if(t!=3){
            cin >> x;
            ans^= 1;
        } else {
            cout << ans;
        }
    }

    cout << endl;
    return 0;
}