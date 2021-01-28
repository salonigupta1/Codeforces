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

int main()
{
    //OJ;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int* arr = new int[n];
        vector<int> freq(n+1, 0);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int maxfreq = 1;
        int ans = 0;
        for(int i=0; i<=n; i++){
            if(freq[i]>=maxfreq){
                ans = freq[i];
                maxfreq = freq[i];
            }
        }

        cout << ans << endl;

        
    }
    return 0;
}