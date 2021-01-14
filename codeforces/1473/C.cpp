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
        int n, k;
        cin >> n >> k;
        int* arr = new int[k];
        int first = abs(n-k);
        int second = abs(k-first)-1;

        int ans=1;
        for(int i=0; i<second; i++){
            cout << ans <<  " ";
            ans++;
        }

        ans = k;
        first++;
        for(int i=0; i<first; i++){
            cout << ans << " ";
            ans--;
        }
        cout << endl;
    }
    return 0;
}