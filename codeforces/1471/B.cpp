#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<deque>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int

int main()
{
    //OJ;
    ll t;
    cin >> t;
    while(t--){
        ll n, x, a;
        cin >> n >> x;
        vector<ll> v;
        ll sum = 0;
        for(ll i=0; i<n; i++){
            cin >> a;
            v.push_back(a);
            sum+= a;
        }  
        ll minEle = LONG_MAX;
        ll c = 0;
        for(ll i=0; i<n; i++){
            ll ele = v[i];
            c=1;
            while(ele%x==0){
                c++;
                ele = ele/x;
            }

            minEle = min(minEle, c);
        }

        for(ll i=0; i<n; i++){
            ll first = v[i];
            if(first%x!=0){
                break;
            }
            c=0;
            while(first%x==0){
                c++;
                first = first/x;
                
            }

            if(c<=minEle){
                sum+= (v[i]*c);
                minEle = c;
            } else {
                sum+= (v[i]*minEle);
            }
        }
       
          cout << sum << endl;  
    }
    return 0;
}