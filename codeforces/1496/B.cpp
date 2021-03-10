#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include<climits>
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
    //OJ;
    long long int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        vector<long long int> arr(n);
        for(long long int i=0; i<n; i++){
            cin >> arr[i];
        }

        set<long long int> set;
        sort(arr.begin(), arr.end());
        for(long long int i=0; i<n; i++){
            set.insert(arr[i]);
        }

        vector<long long int> arrr;
        for(int i=0; i<n; i++){
            if(arr[i]!=i){
                arrr.push_back((long long int)i);
                break;
            }
        }


        if(arrr.size() == 0){
            cout << n+k << endl;
        } else if(k==0){
            cout << n << endl;
        } else {
            long long int x = ceil((arr[n-1]+arrr[0])/2.0);
            if(set.find(x)!=set.end()){
                cout << n << endl;
            } else {
                cout << n+1 << endl;
            }
        }


    }
    return 0;
}