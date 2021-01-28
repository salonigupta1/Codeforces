#include <iostream>
#include <vector>
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
   // OJ;
    long long int n, d;
    cin >> n >> d;
    vector<pair<long long int,long long int>> friends(n);
    for(long long int i=0; i<n; i++){
        cin >> friends[i].first >> friends[i].second;
    }

    sort(friends.begin(), friends.end());

    long long int ans = 0;
    long long int start = 0;
    long long int end = 0;
    long long int tempans = 0;
    while(end<n){
        if(friends[end].first< friends[start].first+d){
            tempans+= friends[end].second;
            end++;
        } else {
            tempans-= friends[start].second;
            start++;
        }

        ans = max(tempans, ans);
    }

    cout << ans << endl;

    return 0;
}