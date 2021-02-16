#include <iostream>
#include <algorithm>
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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int* arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%3 == 0){
                count0++;
            } else if(arr[i]%3 == 1){
                count1++;
            } else if(arr[i]%3 == 2){
                count2++;
            }
        } 

        int ans = 0;
        for(int i=0; i<2*n; i++){
            while(count0>count1){
                count0--;
                count1++;
                ans++;
            }

            while(count1>count2){
                count1--;
                count2++;
                ans++;
            }

            while(count2>count0){
                count2--;
                count0++;
                ans++;
            }
        }

        cout << ans << endl;

    }
    return 0;
}