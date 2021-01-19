#include <iostream>
#include <vector>
#include <algorithm>
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
        long long int n;
        cin >> n;
        vector<pair<long long int,long long int>> a(n);
        for(long long int i=0; i<n; i++){
            cin >> a[i].first;
        }
        for(long long int i=0; i<n; i++){
            cin >> a[i].second;
        }


        sort(a.begin(), a.end());

        long long int sum = 0;
        for(long long int i=n-1; i>=0; i--){
            if(a[i].first<=sum){
                continue;
            } 
            if(a[i].first <= sum+a[i].second){
                sum = a[i].first;
            } else {
                sum+= a[i].second;
            }
        }

        cout << sum << endl;
    }
    return 0;
}