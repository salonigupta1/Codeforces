#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);


vector<double>vx,vy;

int main()
{
   // OJ;
    FIO;
 
    int line,n,i,j;
    cin>>line;
    while(line--)
    {
        cin >> n;
        for(int i=0; i<2*n; i++){
            int a, b;
            cin >> a >> b;
            if(a==0){
                vy.push_back(abs(b));
            } else {
                vx.push_back(abs(a));
            }
        }
        sort(vx.begin(),vx.end());
        sort(vy.begin(),vy.end());
        double ans=0.00;
        long double fin = 0.00;
        for(i=0; i<n; i++){
            fin += (double)sqrt((double)(vy[i] * vy[i]) + (double)(vx[i] * vx[i])); 
        }
 
        cout<<setprecision(15);
        cout<<fixed;
        cout<<fin<<endl;
 
        vx.clear();
        vy.clear();
    }
}