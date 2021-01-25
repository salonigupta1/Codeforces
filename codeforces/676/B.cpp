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
    int n, t;
    cin >> n >> t;
    double ant[60] = {0.00};
    for(int i=0; i<t; i++){
        int node = 1;
        for(int level = 1; level<=n; level++){
            int ctr = 0;
            while(ctr<level){
                if(level == 1){
                    if(ant[node] == 1){
                        ant[node+level]+= 0.5;
                        ant[node+level+1]+=0.5;
                    } else {
                        ant[node]=1.00;
                    }
                } else {
                    if(ant[node]>1 && level<n){
                        double extra = ant[node]-1;
                        ant[node]=1.00;
                        ant[node+level+1]+=extra/2.0;
                        ant[node+level]+= extra/2.0;
                    }
                }
                ++node;
                ++ctr;
            }
        }
    }

    int ans = 0;
    int last = n*(n+1);
    for(int i=1; i<=last/2; i++){
        if(ant[i]>=1){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}