#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <algorithm>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

vector<int> ans(101);

pair<int,int> findMax(vector<int> arr, int start, int end){
    int max_ = INT_MIN;
    int maxPos = -1;
    for(int i=start; i<=end; i++){
        if(arr[i]>max_){
            max_ = arr[i];
            maxPos = i;
        }
    }

    return {max_, maxPos};

}

void fun(vector<int> arr, int x, int start, int end){
    if(start>end){
        return;
    }
    auto max_ = findMax(arr, start, end);
    int a = max_.first;
    int p = max_.second;
    ans[a] = x+1;
    fun(arr, x+1, start, p-1);
    fun(arr, x+1, p+1, end);
}

int main()
{
    //OJ;
    int t;
    cin >> t;
    while(t--){
        ans.clear();
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        fun(arr, -1, 0, n-1); 
        for(int i=0; i<n; i++){
            cout << ans[arr[i]] << " ";
        }     
        cout << endl;  

    }
    return 0;
}