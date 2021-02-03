#include <iostream>
#include<vector>
#include<climits>
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
    //OJ;
    string s;
    cin >> s;
    int ans = INT_MAX;
    int n = s.size();
    if(n==1){
        cout << 1 << endl;
        return 0;
    }

    for(char c = 'a'; c<='z'; c++){
        vector<int> arr;
        for(int i=0; i<n; i++){
            if(s[i] == c){
                arr.push_back(i+1);
            }
        }

        if(arr.size()==0){
            continue;
        }

        if(arr[0]!=1){
            arr.insert(arr.begin(),0);
        }

        if(arr[arr.size()-1]!=n){
            arr.push_back(n+1);
        }

        int temp = 0;
        for(int i=0; i<arr.size()-1; i++){
            temp = max(temp, arr[i+1]-arr[i]);
        }

        ans = min(ans, temp);

    }

    cout << ans << endl;
    return 0;
}