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
    int t, sx, sy, ex, ey;
    int time = -1;
    string wind;
    cin >> t >> sx >> sy >> ex >> ey >> wind;
    for(int i=0; i<t; i++){
        switch(wind[i]){
            case 'E':
                if(sx<ex){
                    sx+=1;
                }
                break;
            case 'S':
                if(sy>ey){
                    sy-=1;
                }
                break;
            case 'W':
                if(sx>ex){
                    sx-=1;
                }
                break;
            case 'N':
                if(sy<ey){
                    sy+=1;
                }
                break;
            default:
                break;
        }

        if(sx == ex && sy == ey){
            time = i+1;
            break;
        }
    }

    cout << time << endl;
    return 0;
}