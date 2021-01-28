#include <iostream>
#include <string>
#include<vector>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool isDiv(long long int n,long long int d){
    string x;
    x = to_string(n);
    for(int i=0; i<x.size(); i++){
        if((x[i]-'0') == d){
            return true;
        }
    }

    return false;
}

int main()
{
    //OJ;
    long long int t;
    cin >> t;
    while(t--){
        long long int q, d;
        cin >> q >> d;
        long long int num;
        for(long long int i=0; i<q; i++){
            cin >> num;
            if(isDiv(num, d)){
                cout << "YES" << endl;
            } else {
                while(!isDiv(num, d) && num>0){
                    num-=d;
                }

                if(isDiv(num, d) && num>0){
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
            
        }
    }
    return 0;
}