#include <iostream>
#include <stack>
#include <vector>
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
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        stack<pair<int, int>> st;
        st.push({arr[0], 0});
        for(int i=1; i<n; i++){
            if(arr[i]>st.top().first){
                st.push({arr[i], i});
            }
        }

        stack<int> tempans;
        vector<int> ans;
        for(int i=n-1; i>=0;){
            while(arr[i]!=st.top().first){
                tempans.push(arr[i]);
                i--;
            }
            st.pop();
            tempans.push(arr[i]);
            i--;
            while(!tempans.empty()){
                ans.push_back(tempans.top());
                tempans.pop();
            }
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}