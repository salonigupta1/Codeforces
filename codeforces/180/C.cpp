#include <iostream>
#include <string>
#include <vector>
#include <climits>
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
    string s;
    cin >> s;
    int count1=0;
    int n = s.size();
    vector<int> arr(n);
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            arr[i] = 1;
            count1++;
        }
    }

    int ans = INT_MAX;
    int ze = 0;
    int one = 0;
    for(int i=0; i<n; i++){
        ans = min(ans, ze+count1-one);
        if(arr[i] == 1){
            one++;
        } else {
            ze++;
        }
    }

    cout << min(ans, ze+count1-one) << endl;

   
    return 0;
}