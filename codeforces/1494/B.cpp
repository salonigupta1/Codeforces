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
        int n,a,b,c,d,e=0,f=0;
        cin>>n>>a>>b>>c>>d;
        int aa=a,bb=b,cc=c,dd=d;
        int nn=n-2;
        if((a<=nn) && (b<=nn) && (c<=nn) && (d<=nn))
        {
            cout<<"YES"<<endl;
            continue;
        } 
        if(aa==n)
        {
            b--;
            d--;
        }
        if(aa==n-1)
        {
            e++;
        }
        if(cc==n)
        {
            b--;
            d--;
        }
        if(cc==n-1)
        {
            e++;
        }
        if(bb==n)
        {
            a--;
            c--;
        }
        if(bb==n-1)
        {
            f++;
        }
        if(dd==n)
        {
            a--;
            c--;
        }
        if(dd==n-1)
        {
            f++;
        }
        if(a<0 || b<0 || c<0 || d<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(e==1 && b==0 && d==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(e==2)
        {
            if((b>=1 && d>=1) || (b>=2) || (d>=2)) 
            {
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        if(f==1 && a==0 && c==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(f==2)
        {
            if((a>=1 && c>=1) || (a>=2) || (c>=2)) 
            {
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        cout<<"YES"<<endl;
        
    }
    return 0;
}