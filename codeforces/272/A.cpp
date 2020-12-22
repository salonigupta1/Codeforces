#include <iostream>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool isSeq(int ap, int d){
    if((ap-1)%d==0){
        return false;
    }

    return true;
}

int main()
{
    //OJ;
    int n;
    cin >> n;
    int a;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> a;
        sum+=a;
    }

    int count = 0;
    for(int i=1; i<=5; i++){
        if(isSeq(sum+i, n+1)){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}