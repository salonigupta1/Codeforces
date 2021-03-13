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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans=n-1;
        for(int i=2;i*i<=n;i++){
         if(n%i==0){
            int k=n/i;
            ans=n-k;
            break;
         }
      }
      
      cout<<n-ans<<" "<<ans<<endl;
    }
    return 0;
}