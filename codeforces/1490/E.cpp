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

#define ll long long int

bool findIfItCanWin(ll pos, vector<ll> arr){
    ll power = arr[pos];
    for(ll i=0; i<arr.size(); i++){
        if(i == pos){
            continue;
        }
        if(power < arr[i]){
            return false;
        }

        power+= arr[i];
    }

    return true;
}

int main()
{
    //OJ;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> arr(n);
        vector<ll> b(n);
        for(ll i=0; i<n; i++){
            cin >> arr[i];
            b[i] = arr[i];
        }

        sort(arr.begin(), arr.end());
        ll l = -1;
        ll r = n-1;
        while((r-l)>1){
            ll m = (r+l)/2;
            if(findIfItCanWin(m, arr)){
                r = m;
            } else {
                l = m;
            }
        }

        vector<ll> win;
        for(ll i=0; i<n; i++){
            if(b[i]>=arr[r]){
                win.push_back(i+1);
            }
        }

        cout << win.size() << endl;
        for(int i=0; i<win.size(); i++){
            cout << win[i] << " ";
        }

        cout << endl;
        
    }
    return 0;
}