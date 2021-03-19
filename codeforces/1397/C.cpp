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

#define ll long long int

int main()
{
    //OJ;
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(n==1){
        cout << "1 1" << endl;
        cout << "0" << endl;
        cout << "1 1" << endl;
        cout << "0" <<endl;
        cout << "1 1" << endl;
        cout << -arr[0] << endl;
    } else {
        cout << "1 1" << endl;
        cout << -arr[0] << endl;
        arr[0] = 0;
        cout << "2 " << n << endl;
        for(int i=1; i<n; i++){
            if(i>1){
                cout << " ";
            }
            ll len = n-1LL;
            ll val = (arr[i]%n)*len;
            arr[i]+=val;
            cout << val;
        }
        cout << endl;
        cout << "1 " << n << endl;
        for(int i=0; i<n; i++){
            if(i>0){
                cout << " ";
            }
            cout << -arr[i];
        }

        cout << endl;
    }
    return 0;
}