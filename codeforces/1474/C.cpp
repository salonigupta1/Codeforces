#include <iostream>
#include<vector>
#include<set>
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
        int* arr = new int[2*n];
        for(int i=0; i<(2*n); i++){
            cin >> arr[i];
        }

        n = n*2;
        int mxm = -1;
        int j = -1;
        for(int i=0; i<n; i++){
            if(arr[i]>mxm){
                mxm = arr[i];
                j = i;
            }
        }

        int xx = 1;
        for(int i=0; i<n; i++){
            if(i==j){
                continue;
            }

            vector<pair<int, int>> ans;
            multiset<int> ms;
            for(int k=0; k<n; k++){
                ms.insert(arr[k]);
            }

            int x = mxm+arr[i], f=1;
            while(!ms.empty()){
                int mx = *ms.rbegin();
                ms.erase(ms.find(mx));
                if(ms.find(x-mx) == ms.end()){
                    f = 0;
                    break;
                }

                ms.erase(ms.find(x-mx));
                pair<int, int> p (mx, x-mx);
                ans.push_back(p);
                x = mx;
            }

            if(f){
                cout << "YES" << endl;
                cout << mxm+arr[i] << endl;
                for(auto it: ans){
                    cout << it.first << " " << it.second <<endl;
                }
                xx = 0;
                break;
            }

        }
        if(xx){
            cout << "NO" << endl;
        }
        
    }
    return 0;
}