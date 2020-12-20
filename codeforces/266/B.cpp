#include<iostream>
using namespace std;


#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    //OJ;
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--){
        for(int i=0; i<n; i++){
            if(s[i] == 'B' && (i+1<n) && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }

    cout << s << endl;
return 0;
   
}