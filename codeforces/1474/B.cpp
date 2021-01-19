#include <iostream>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool primN[100001];
void prime(int n){
    for(int i=0; i<n ;i++){
        primN[i] = true;
    }

    for(int i=2; i*i<=n; i++){
        if(primN[i]){
            for(int j=i*i; j<=n; j+=i){
                primN[j] = false;
            }
        }
    }
}

int main()
{
    //OJ;
    int t;
    cin >> t;
    prime(100000);
    while (t--)
    {
        int d;
        cin >> d;
        int x = 1;
        x+=d;
        int ans = 1;
        while(!primN[x]){
            x++;
        }
        ans*=x;
        x+=d;
        while(!primN[x]){
            x++;
        }
        ans*=x;
        cout << ans << endl;
    }
    return 0;
}