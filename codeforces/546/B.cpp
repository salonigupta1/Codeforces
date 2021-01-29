#include <iostream>
#include<unordered_map>
#include<vector>
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
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        m[arr[i]]++;
    }

    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == arr[i+1]){
            int add = arr[i] + 1;
            ans++;
            while(m.find(add)!=m.end()){
                add++;
                ans++;
            }

            m[add]++;
        }
    }

    cout << ans << endl;
    return 0;
}