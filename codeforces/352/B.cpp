#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include<algorithm>
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
    vector<pair<int, int>> v(100001, {-1, 0});
    int x;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> x;
        arr[i] = x;
        if(v[x].first == -1){
            v[x].first = i;
            v[x].second = 0;
        } else if(v[x].first!=-1 && v[x].second == 0){
            v[x].second = i-v[x].first;
            v[x].first = i;
        }
        else {  
            if(i-v[x].first != v[x].second){
                v[x].second = -1;
            } 
            v[x].first = i;
        }

    }


    sort(arr, arr+n);
    int  count = 0;
    for(int i=0; i<n; i++){
        if(i>0 && arr[i] == arr[i-1]){
            continue;
        }
        if(v[arr[i]].second != -1){
            count++;
        }
    }

    cout << count << endl;
    for(int i=0; i<n; i++){
        if(i>0 && arr[i] == arr[i-1]){
            continue;
        }
        if(v[arr[i]].second != -1){
            cout << arr[i] << " " << v[arr[i]].second << endl;
        }
    }

    return 0;
}