#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
#define ll long long int
int main() 
{
    //OJ;
    FIO;
    ll t;
    cin >> t;
    while(t--){
        ll n, ele;
        cin >> n;
        vector<ll> even;
        vector<ll> odd;
        for(ll i=0; i<n; i++){
            cin >> ele;
            if(ele%2==0){
                even.push_back(ele);
            } else {
                odd.push_back(ele);
            }
        }
        
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
 
        ll i = even.size()-1;
        ll j = odd.size()-1;
        if(even.size()==0){
            i = -1;
        }
        if(odd.size()==0){
            j = -1;
        }
        //cout << i << " " << j << endl;
        ll sum1 = 0;
        ll sum2 = 0;
        bool Aturn = true;
        while(i>=0 && j>=0){
            if(Aturn){
                if(even[i]>=odd[j]){
                    sum1+= even[i];
                    i--;
                } else {
                    j--;
                }
            } else {
                if(odd[j]>=even[i]){
                    sum2+= odd[j];
                    j--;
                } else {
                    i--;
                }
            }
            Aturn = !Aturn;  
        }
        while(i>=0){
            if(Aturn){
                sum1+= even[i];
            }
            Aturn=!Aturn;
            i--;
        }
 
        while(j>=0){
            if(!Aturn){
                sum2+= odd[j];
            }
            Aturn = !Aturn;
            j--;
        }
 
        if(sum1>sum2){
            cout << "Alice" << endl;
        } else if(sum2>sum1){
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }
    return 0;
   
}