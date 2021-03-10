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


vector<int>vx,vy;

int main()
{
    //OJ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int line,n,i,j;
    cin>>line;
    while(line--)
    {
        cin>>n;
        for(i=1; i<=(n<<1); i++)
        {
                int x,y;
                cin>>x>>y;
                if(x==0) vy.push_back(abs(y));
                else if(y==0) vx.push_back(abs(x));
        }
        sort(vx.begin(),vx.end());
        sort(vy.begin(),vy.end());
        double ans=0.00;
        for(i=0; i<n; i++)
        {
            double temp=(double)sqrtl((double)vx[i]*(double)vx[i]+(double)vy[i]*(double)vy[i]);
            ans+=temp;
        }
        cout<<setprecision(10);
        cout<<fixed;
        cout<<ans<<endl;
 
        vx.clear();
        vy.clear();
    }
}