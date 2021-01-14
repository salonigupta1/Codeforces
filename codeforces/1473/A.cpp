#include <bits/stdc++.h>
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
        int n, d;
        cin >> n >> d;
        int arr[n];
        int count = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]<=d){
                count++;
            }
        }

        if(count == n){
            cout << "YES" << endl;
            continue;
        }
        sort(arr, arr+n);
        if(arr[0]+arr[1]<=d){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
