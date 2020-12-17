#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

int main()
{
    //OJ;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll* arr = new ll[n];
        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        ll* ans = new ll[n];
        for(int i=0; i<n; i++){
            bool flag = false;
            int j = 1;
            while(j<=arr[i]){
                if(j==arr[i]){
                    flag = true;
                    break;
                }
                j = j*2;
            }

            if(flag == true){
                ans[i] = j;
            } else {
                ans[i] = j/2;
            }
        }


        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        
    }
}