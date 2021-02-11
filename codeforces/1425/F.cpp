#include <iostream>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int n;
const int MX = 1000;
int ans[MX+5];

void answer(){
    cout << "! ";
    for(int i=1; i<=n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int ask(int l, int r){
    cout << "? " << l << " " << r << endl;
    int ret;
    cin >> ret;
    return ret;
}

int main()
{
    //OJ;
    cin >> n;
    ans[n] = ask(1, n);
    ans[1] = ans[n] - ask(2, n);
    for(int i=2; i<n; i++){
        ans[i] = ask(i-1, i)-ans[i-1];
    }

    for(int i=1; i<n; i++){
        ans[n] -= ans[i];
    }

    answer();
    return 0;
}