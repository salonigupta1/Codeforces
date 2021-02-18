#include <iostream>
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
        long long int* arr = new long long int[n];
        int count0 = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        bool found = false;
        long long int total = 0;
        for(int i=0; i<n; i++){
            total+= arr[i];
            total-= i;
            if(total<0){
                found = true;
                break;
            }
        }

        

        if(!found){
            cout <<"YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}