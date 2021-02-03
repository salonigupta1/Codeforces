#include <iostream>
#include <vector>
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
    vector<double> v(n);
    double h, m;
    for(int i=0; i<n; i++){
        cin >> h >> m;
        m = m/60;
        h+= m;
        v[i] = h;
    }

    sort(v.begin(), v.end());
    int freq = 1;
    int tempfreq = 1;
    for(int i=0; i<n-1; i++){
        if(v[i] == v[i+1]){
            tempfreq++;
        } else {
            tempfreq = 1;
        }

        freq = max(freq, tempfreq);
    }

    cout << freq << endl;

    return 0;
}