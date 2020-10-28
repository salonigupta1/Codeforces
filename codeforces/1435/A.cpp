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
        int n;
        cin  >> n;
        int* arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int* ans = new int[n];
        int j=0;
        for(int i=n-1; i>=0; i--){
            if(i>=n/2){
                   ans[j] = -arr[i];
            } else {
                ans[j] = arr[i];
            }
            j++;
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}