#include <iostream>
#include<vector>
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
   // OJ;
    int n;
    cin >> n;
    vector<int> first(n);
    vector<int> sec(n);
    for(int i=0; i<n; i++){
        cin >> first[i];
        sec[i] = first[i];
    }    

    sort(sec.begin(), sec.end());
    int count = 0;
    for(int i=0; i<n; i++){
        if(sec[i] == first[i]){
            count++;
        }
    }

    if(count == n){
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }

    int seg = 0;
    int l, r;
    for(int i=0; i<n-1, seg<1;){
        if(first[i]<first[i+1]){
            i++;
        } else {
            l = i;
            r = i;
            while(first[i]>first[i+1] && i<n-1){
                i++;
                r++;
            }

            sort(first.begin()+l, first.begin()+r+1);
            seg++;
        }
    }
    
    for(int i=0; i<n; i++){
        if(first[i]!=sec[i]){
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
    cout << l+1 << " " << r+1 << endl;
    
    return 0;
}