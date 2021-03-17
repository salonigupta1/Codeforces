#include <iostream>
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
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        for(int i=0; i<k-3; i++){
            cout << 1 << " ";
        } 
        
        n-= (k-3);       
        if(n%2!=0){
            cout << 1 << " " << n/2 << " " << n/2;
        } else {
            if((n/2)%2==0){
                cout << n/2 << " " << n/4 << " " << n/4;
            } else {
                cout << 2 << " " << (n-2)/2 << " " << (n-2)/2;
            }
        }
        
        cout << endl;
        

    }
    return 0;
}