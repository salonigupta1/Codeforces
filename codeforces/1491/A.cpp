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
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    int counone = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
            counone++;
        }
    }

    for(int i=0; i<q; i++){
        int type, num;
        cin >> type >> num;
        if(type==2){
            if(counone>=num){
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            if(arr[num-1] == 0){
                arr[num-1] = 1;
                counone++;
            } else if(arr[num-1] == 1){
                arr[num-1] = 0;
                counone--;
            }
        }
    }
    return 0;
}