#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
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
    int n, x;
    cin >> n;
    int ind = n-1;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> a;
    char c;
    string s;
    for(int i=1; i<= 2*n; i++){
        cin >> c;
        if(c == '+'){
            s+= '+';
        } else {
            s+= '-';
            cin >> x;
            a.push_back(x);
        }
    }

    vector<int> ans;    
    for(int i=2*n-1; i>=0; i--){
        if(s[i] == '+'){
            if(pq.empty()){
                cout << "NO" << endl;
                return 0;
            } else {
                ans.push_back(pq.top());
                pq.pop();
            }
        } else {
            if(pq.empty()){
                pq.push(a[ind]);
                ind--;
            } else {
                if(pq.top() < a[ind]){
                    cout << "NO" << endl;
                    return 0;
                } else {
                    pq.push(a[ind]);
                    ind--;
                }
            }
        } 
    }

    cout << "YES" << endl;
    for(int i=n-1; i>=0; i--){
        cout << ans[i] << " ";
    }
    return 0;
}