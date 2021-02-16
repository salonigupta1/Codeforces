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
        int n;
        cin >> n;
        double* arr = new double[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int ans = 0;
        for(int i=0; i<n-1; i++){

            if(arr[i]<arr[i+1]){
                double x = arr[i+1]/arr[i];
                while(x>2){
                    arr[i]=arr[i]*2;
                    x = arr[i+1]/arr[i];
                    ans++;
                }
            } else if(arr[i]>arr[i+1]){
                double x = arr[i]/arr[i+1];
                while(x>2){
                    arr[i] = arr[i]/2;
                    x = arr[i]/arr[i+1];
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}