#include<iostream>
using namespace std;

#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    //OJ;
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s << endl;
return 0;
   
}