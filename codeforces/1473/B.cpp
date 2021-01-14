#include <bits/stdc++.h>
#include<numeric>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);


int gcd(int a, int b){
    if(b==0){
        return a;
    }

    return gcd(b, a%b);
}

int lcmf(int a, int b){
    return a*b/gcd(a,b);
}

int main()
{
    //OJ;
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string a, b;

        int ans = lcmf(s1.size(), s2.size());
        while(a.size()<ans){
            a +=s1;
        }

        while(b.size()<ans){
            b += s2;
        }

        if(a==b){
            cout << a << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}