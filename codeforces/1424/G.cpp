#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>
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
    int n;
    cin >> n;
    map<long long int, long long int> m;
    for(int i=0; i<n; i++){
        int b, d;
        cin >> b >> d;
        m[b]++;
        m[d]--;
    }

    long long int mx = LONG_MIN;
    long long int pe;
    long long int cnt = 0;
    for(auto it: m){
        long long int year = it.first;
        long long int num = it.second;
        cnt+= num;

        if(cnt>mx){
            mx = cnt;
            pe = year;
        }
    }

    cout << pe << " " << mx << endl;
    
    return 0;
}