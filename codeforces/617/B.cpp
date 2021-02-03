#include <iostream>
#include <vector>
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
    vector<int> v;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x==1){
            v.push_back(i);
        }
    }
    long long int ans = 1;
    if(v.size()==0){
        cout << 0 << endl;
        return 0;
    }
    for(int i=1; i<v.size(); i++){
        ans*= (v[i]-v[i-1]);
    }

    cout << ans << endl;
    return 0;
}