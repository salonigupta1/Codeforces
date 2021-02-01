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
    string s;
    cin >> s;
    int n = s.size();
    bool first = false;
    bool second = false;
    bool both = false;
    bool bothans = false;
    for(int i=0; i<n;){
        if(i+2<n && ((s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'A') || (s[i] == 'B' && s[i+1] == 'A' && s[i+2] == 'B') ) && !both){
            both = true;
            i+=3;
            continue;
        }

        if(both){
            if(i+1<n && ((s[i] == 'A' && s[i+1] == 'B') || (s[i] == 'B' && s[i+1] == 'A'))){
                bothans = true;
                break;
            }
            i++;
            continue;
        } 
        
        if(i+1<n && (s[i] == 'A' && s[i+1] == 'B') && !first){
            first = true;
            i+=2;
            continue;
        }

        if(i+1<n && (s[i]=='B' && s[i+1] == 'A') && !second){
            second = true;
            i+=2;
            continue;
        }

        i++;

    }



    if((first && second) || bothans){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}