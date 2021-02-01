#include <iostream>
#include<algorithm>
#include <vector>
#include<climits>
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
    long long int a, b, c;
    cin >> a >> b >> c;
    long long int x, s=0, ss=0, mi = LONG_MAX, mia = LONG_MAX, mib = LONG_MAX, mic = LONG_MAX;
    for(long long int i=0; i<a; i++){
        cin >> x;
        s+= x;
        ss+= x;
        mia = min(mia, x);
    }

    mi = min(mi, ss);
    ss = 0;
    for(long long int i=0; i<b; i++){
        cin >> x;
        s+= x;
        ss+= x;
        mib = min(mib, x);
    }
    mi = min(mi, ss);
    ss = 0;
    for(long long int i=0; i<c; i++){
        cin >> x;
        ss+=x;
        mic = min(mic, x);
        s+=x;
    }

    mi = min(mi, ss);
    vector<long long int> v;
    v.push_back(mia);
    v.push_back(mib);
    v.push_back(mic);
    sort(v.begin(), v.end());

    mi = min(mi, v[1]+v[0]);
    cout << (s-(2*mi)) << endl;

    return 0;
}