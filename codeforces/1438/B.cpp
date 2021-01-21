#include <iostream>
#include<unordered_map>
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
        int* arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        unordered_map<int, int> m;
        bool found = false;
        for(int i=0; i<n; i++){
            if(m.find(arr[i])!=m.end()){
                found = true;
                break;
            } else {
                m[arr[i]]++;
            }
        }

        if(!found){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}