#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
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
        vector<int> ele(n);
        vector<int> unlocked;
        vector<int> status(n);
        for(int i=0; i<n; i++){
            cin >> ele[i];
        }

        for(int i=0; i<n; i++){
            cin >> status[i];
            if(status[i] == 0){
                unlocked.push_back(ele[i]);
            }
        }

        sort(unlocked.rbegin(), unlocked.rend());
        vector<int> ans;
       
        for(int i=0; i<n; i++){
            if(status[i] == 0){
                
                ans.push_back(*unlocked.begin());
                unlocked.erase(unlocked.begin());
            } else {
                ans.push_back(ele[i]);
            }
            
            
        }

        

        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }

        cout << endl;


    }
    return 0;
}