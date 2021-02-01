#include <iostream>
#include<algorithm>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

string line;

int main()
{
    //OJ;
    int k;
    string s;
    cin >> s >> k;
    int n = s.size();
    for(int i=0; i<n ; i++){
        int temp = i;
        for(int j = i+1; j<n && j-i<=k; j++){
            if(s[j]>s[temp]){
                temp = j;
            }
        }

        for(int y=temp; y>i; y--){
            swap(s[y], s[y-1]);
        }

        k-=(temp-i);
    }

    cout << s << endl;
}