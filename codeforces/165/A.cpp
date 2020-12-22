#include <iostream>
#include<vector>
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
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    int count = 0;
    for(int i=0; i<n; i++){
        int x = v[i].first;
        int y = v[i].second;
        bool up = false, down = false, left = false, right = false;
        for(int j=0; j<n; j++){
            if(i!=j){
                if(v[j].first==x){
                    if(v[j].second < y){
                        left = true;
                    } else if(v[j].second > y){
                        right = true;
                    }
                } else if(v[j].second == y){
                    if(v[j].first < x){
                        down = true;
                    } else if(v[j].first > x){
                        up = true;
                    }
                }
            }
        }

        if(left && up && down && right){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}