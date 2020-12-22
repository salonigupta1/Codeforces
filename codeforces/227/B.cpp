#include <iostream>
#include<set>
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
    FIO;
    long long int n;
    cin >> n;
    long long int* arr = new long long int[n];
    unordered_map<long long int,long long int> map;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        map[arr[i]] = i;
    }

    long long int m;
    cin >> m;
    long long int fc = 0;
    long long int sc = 0;
    while(m--){
        long long int q;
        cin >> q;
        if(map.find(q)!=map.end()){
            fc+= (map[q]+1);
            sc+= (n-map[q]);
        }
    }

    cout << fc << " " << sc << endl;

    return 0;
}