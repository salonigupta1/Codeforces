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
    int n;
    cin >> n;
    int arr[8] = {0};
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        arr[x]++;
    }

    int reqParts = n/3;
    if(arr[1] == reqParts){
        if(arr[2] + arr[3] == n/3){
            int twoCount = arr[2];
            int threeCount = arr[3];
            if(twoCount == 0){
                if(arr[6]!=reqParts){
                    cout << -1 << endl;
                } else {
                    for(int i=0; i<reqParts; i++){
                        cout << 1 << " " << 3 <<  " " << 6  << endl;
                    }
                }
            } else if(threeCount == 0){
                if(arr[6]+arr[4]!=reqParts){
                    cout << -1 << endl;
                } else {
                    int fourCount = arr[4];
                    for(int i=0; i<fourCount; i++){
                        cout << 1 << " " << 2 << " " << 4 << endl;
                    }
                    int sixCount = arr[6];
                    for(int i=0; i<sixCount; i++){
                        cout << 1 << " " << 2 << " " << 6 << endl;
                    }
                }
            } else {
                if(arr[3]>arr[6]){
                    cout << -1 << endl;
                }  else{
                    int countFour = arr[4];
                    int countSix = arr[6];
                    if(countFour + countSix != reqParts){
                        cout << -1 << endl;
                    } else if(countSix == 0){
                        cout << -1 << endl;
                    } else {
                        for(int i=0; i<arr[3]; i++){
                            cout << 1 << " " << 3 << " " << 6 << endl;
                        }
                        int sixLeft = arr[6]-arr[3];
                        for(int i=0; i<sixLeft; i++){
                            cout << 1 << " " << 2 << " " << 6 << endl;
                        }
                        for(int i=0; i<countFour; i++){
                            cout << 1 << " " << 2 << " " << 4 << endl;
                        }
                    }
                }
                
            }
        } else {
            cout << -1 << endl;
        }
    } else {
        cout << -1 << endl;
    }

    return 0;
}