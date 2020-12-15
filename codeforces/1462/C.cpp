#include <iostream>
#include<algorithm>
#include<vector>
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
        int x;
        cin >> x;
        if(x>45){
            cout <<-1 << endl;
        } else if(x<=9){
            cout << x << endl;
        }else {
            int arr[] = {0,1,2,3,4,5,6,7,8,9};
            int pointer = 9;
            vector<int> ans;
            while(x && pointer>=0){
                if(x>=arr[pointer]){
                    x = x-arr[pointer];
                    ans.push_back(arr[pointer]);
                    pointer--;
                } else {
                    pointer--;
                }
            }
            if(pointer<0){
                cout << -1 << endl;
            } else {
                sort(ans.begin(), ans.end());
                for(int i=0; i<ans.size(); i++){
                    cout << ans[i];
                }
                cout << endl;
            }
        }
    }
    return 0;
}