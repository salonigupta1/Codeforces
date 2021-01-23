#include<iostream>
using namespace std;

#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int MOD = 1000000007;
int main() 
{
    //OJ;
    long long int a, b, t;
    cin >> a >> b >> t;
    long long int s[] = {a, b, b - a, -a, -b, a - b};
    cout << (s[(t - 1) % 6] % MOD + MOD) % MOD;
    return 0;
   
}