#include <iostream>
#include <vector>
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
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s1, s2;
        cin >> s1 >> s2;
        vector<int> a1(26, 0);
        vector<int> a2(26, 0);
        for(int i=0; i<n; i++){
            a1[s1[i]-'a']++;
            a2[s2[i]-'a']++;
        }

        bool flag = true;
        for(int i=0; i<25; i++){
            if(a1[i]<a2[i]){
                flag = false;
                break;
            }

            int d = a1[i]-a2[i];
            if(d%k!=0){
                flag = false;
                break;
            }

            a1[i+1]+=d;
        }

        if(flag){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}