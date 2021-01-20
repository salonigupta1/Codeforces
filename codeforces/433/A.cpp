#include <iostream>
#include<algorithm>
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
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    int sum1 = 0;
    int sum2 = 0;
    for(int i=n-1; i>=0; i--){
        if(sum1<=sum2){
            sum1+= arr[i];
        } else {
            sum2+= arr[i];
        }
    }

    if(sum1 == sum2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}