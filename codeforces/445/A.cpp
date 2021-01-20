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
    int n, m;
    char mp[110][110];
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>mp[j][i];
            if(mp[j][i]=='.')
            {
                if((j+i)%2==0)mp[j][i]='B';
                else mp[j][i]='W';
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
            cout<<mp[j][i];
        cout<<endl;
    }
    return 0;
}