#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <math.h>
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(k==0){
            cout << "YES" << endl;
            continue;
        }
        if(n==2*k){
            cout << "NO" << endl;
            continue;
        }

        int low = 0;
        int high = n-1;
        int count = 0;
        while(low<high){
            if(s[low] == s[high]){
                count++;
            } else {
                break;
            }
            low++;
            high--;
        }


        if(count>k){
            cout << "YES" << endl;
        } else if(count==k && high-low>=0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}