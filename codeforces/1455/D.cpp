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

bool isSorted(vector<long long int>& arr){
    for(long long int i=0; i<arr.size()-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }

    return  true;
}

int main()
{
    //OJ;
    long long int t;
    cin >> t;
    while(t--){
        long long int n, x;
        cin >> n >> x;
        vector<long long int> arr(n);
        for(long long int i=0; i<n; i++){
            cin >> arr[i];
        }

        if(isSorted(arr)){
            cout << 0 << endl;
            continue;
        }

        long long int ans = 0;
        for(long long int i=0; i<n; i++){
            if(arr[i]>x){
                long long int temp = x;
                x = arr[i];
                arr[i] = temp;
                ans++;
            }

            if(isSorted(arr)){
                break;
            }
        }

        if(!isSorted(arr)){
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}