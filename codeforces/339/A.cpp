#include <iostream>
#include<string>
#include<algorithm>
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
    string s;
    cin >> s;
    for(int i=0; i<s.length()-1; i++){
        if(s[i] == '1' || s[i] == '2' || s[i] == '3'){
            for(int j=i+1; j<s.length(); j++){
                if(s[j] == '1' || s[j] == '2' || s[j] == '3'){
                    char first = s[i];
                    char second = s[j];
                    int in1 = (int)first;
                    int in2 = (int)second;

                    if(in1 > in2){
                        swap(s[i],s[j]);
                    }
                }
            }
        }
    }

    cout << s << endl;
    return 0;
}