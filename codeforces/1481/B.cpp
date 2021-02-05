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
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        bool last = false;
        int lastpos = -1;
        for(int i=1; i<=k; i++){
            int j;
            for(j=1; j<n; j++){
                if(arr[j]>arr[j-1]){
                    arr[j-1]+=1;
                    lastpos = j;
                    break;
                }
            }
            if(j==n){
                last = true;
                break;
            }
        }

        if(!last){
            cout << lastpos << endl;
        } else {
            
        cout << -1 << endl;
        }
    }
    return 0;
}