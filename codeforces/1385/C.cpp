#include <iostream>
#include <vector>
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
    //OJ;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int pos = n-1;
        while(pos>0 && arr[pos-1]>=arr[pos]){
            pos--;
        }

        while(pos>0 && arr[pos-1]<=arr[pos]){
            pos--;
        }

        cout << pos << endl;
    }
    return 0;
}