#include <iostream>
#include<algorithm>
#include<unordered_map>
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
    //OJ;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int* arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        
        int total = 0;
        vector<int> hill(n, 0);
        vector<int> valley(n, 0);
        for(int i=1; i<n-1; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                total++;
                hill[i]++;
            }
            if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
                total++;
                valley[i]++;
            }
        }

        int ans = total;
        for(int i=0; i<n; i++){
            int val = arr[i];
            int minus = 0;
            if(i-1>=0){
                arr[i] = arr[i-1];
                for(int j=i-1; j<i+2; j++){
                    if(j>=1 && j<n-1){
                        if(!(arr[j]>arr[j-1] && arr[j]>arr[j+1])){
                            if(hill[j])
                                minus++;
                        } else {
                            minus--;
                        }

                        if(!(arr[j]<arr[j-1] && arr[j]<arr[j+1])){
                            if(valley[j])
                                minus++;
                        } else {
                            minus--;
                        }
                    }
                }

                ans = min(ans, total-minus);
            }

            minus = 0;
            if(i+1<n){
                arr[i] = arr[i+1];
                for(int j=i-1; j<i+2; j++){
                    if(j>=1 && j<n-1){
                        if(!(arr[j]>arr[j-1] && arr[j]>arr[j+1])){
                            if(hill[j])
                                minus++;
                        } else {
                            minus--;
                        }

                        if(!(arr[j]<arr[j-1] && arr[j]<arr[j+1])){
                            if(valley[j])
                                minus++;
                        } else {
                            minus--;
                        }
                    }
                }

                ans = min(ans, total-minus);
            }
            arr[i] = val;
        }

        cout << ans << endl;
    }
    return 0;
}