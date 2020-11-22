#include <iostream>
#include<vector>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

void solve(){
            int n,k;
            cin>>n>>k;
            int m=n*k;
            vector<int>a(m);
            for(int i=0;i<m;i++)
                cin>>a[i];
            ll total=0;
            if(n==2){
                for(int i=0;i<m;i+=2)
                    total+=(ll)(a[i]);
                cout<<total<<"\n";
                return;
            }
            int interval=(n+1)/2;
            int left=n-interval;
            left++;
            int x=1;
            int in=0;
            for(int i=m-1;i>=0;i--){
                if(x%left==0){
                    total+=a[i];
                    in++;
                }
                x++;
                if(in>=k)
                    break;
            }
            cout<<total<<"\n";
        }
        int main(){
            //OJ;
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
                solve();
            }
            return 0;
        }