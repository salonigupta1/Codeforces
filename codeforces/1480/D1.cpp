#include <iostream>
#include <vector>
#include <set>
#include<algorithm>
#include<unordered_map>
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
    int x;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int a = -1, b=-1;
    int ans = 0;
    for(int i=0; i<n; i++){
        int v = arr[i];
        if(v==a || (b!=v && i+1<n && arr[i+1] == b)){
            if(v!=b){
                b= v;
                ans++;
            }
        } else {
            a = v;
            ans++;
        }
    }
    
    cout << ans << endl;
    
}