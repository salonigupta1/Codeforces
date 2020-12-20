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
    int grid[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> grid[i][j];
        }
    }

    int output[3][3];
    output[0][0] = grid[0][0] + grid[0][1] + grid[1][0];
    output[0][1] = grid[0][1] + grid[0][0] + grid[0][2] + grid[1][1];
    output[0][2] = grid[0][1] + grid[0][2] + grid[1][2];
    output[1][0] = grid[1][0] + grid[0][0] + grid[1][1] + grid[2][0];
    output[1][1] = grid[1][1] + grid[0][1] + grid[2][1] + grid[1][0] + grid[1][2];
    output[1][2] = grid[1][2] + grid[1][1] + grid[0][2] + grid[2][2];
    output[2][0] = grid[1][0] + grid[2][1] + grid[2][0];
    output[2][1] = grid[2][1] + grid[1][1] + grid[2][0] + grid[2][2];
    output[2][2] = grid[2][2] + grid[2][1] + grid[1][2]; 

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(output[i][j]%2==0){
                cout << 1;
            } else {
                cout << 0;
            }
        }

        cout << endl;
    }
    return 0;
}