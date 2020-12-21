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
    long long int n;
    cin >> n;
    long long int luckydigit = 0;
    while(n!=0){
        long long int rem = n%10;
        n = n/10;
        //cout << rem << endl;
        if(rem==7 || rem==4){
            luckydigit++;
        }
    }

    //cout << luckydigit << endl;
    bool flag = true;
    if(luckydigit == 0){
        flag = false;
    }
    while(luckydigit!=0){
        long long int rem = luckydigit%10;
        luckydigit = luckydigit/10;
        if(rem!=7 && rem!=4){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    
    return 0;
}
