#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    int arr[5][5];
    int row = 0;
    int column = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                row = i+1;
                column = j+1;
            }
        }
    }

    int diffr = abs(row - 3);
    int diffc = abs(column - 3);
    cout << diffr+diffc << endl;
}