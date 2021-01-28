#include <iostream>
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
    long long int a, b, n;
    cin >> a >> b >> n;
    long long int num = a*10;
    long long int x = 0;
    while((num+x)%b!=0 && x<10){
        x++;
    }

    if((num+x)%b!=0 || x>=10){
        cout << -1 << endl;
        return 0;
    }

    cout << num+x;
    for(int i=0; i<n-1; i++){
        cout << 0;
    }
    cout << endl;
}