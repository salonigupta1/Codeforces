#include <iostream>
#include <string>
#include <vector>
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
    //OJ;
    int n;
    cin >> n;
    int* arr = new int[n];
    int* res = new int[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        res[arr[i]] = i+1;
    }

    for(int i=1; i<=n; i++){
        cout << res[i] << " ";
    }
    
    cout << endl;
}