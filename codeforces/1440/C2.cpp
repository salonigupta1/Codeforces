#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
main()
{
    //OJ;
	int t,n,m;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		n++;
		m++;
		int mat[n][m];
		for(int i=1;i<n;i++)
		{
			cin>>str;
			for(int j=1;j<m;j++)
			{
				if(str[j-1]=='1')
					mat[i][j]=1;
				else
					mat[i][j]=0;
			}
		}
		vector<int>res;
		int cnt=0;
		for(int i=1;i<m-2;i++)
		{
			for(int j=1;j<n;j++)
			{
				if(j==n-1 && mat[j][i]==1)
				{
					mat[j][i]=0;
					mat[j][i+1]^=1;
					mat[j-1][i+1]^=1;
					res.push_back(j);
					res.push_back(i);
					res.push_back(j);
					res.push_back(i+1);
					res.push_back(j-1);
					res.push_back(i+1);
					cnt++;
				}
				else if(mat[j][i]==1)
				{
					mat[j][i]=0;
					mat[j][i+1]^=1;
					mat[j+1][i+1]^=1;
					res.push_back(j);
					res.push_back(i);
					res.push_back(j);
					res.push_back(i+1);
					res.push_back(j+1);
					res.push_back(i+1);
					cnt++;
				}
			}
		}
		for(int i=1;i<n-2;i++)
		{
			if(mat[i][m-2]==1)
			{
				mat[i][m-2]=0;
				mat[i+1][m-2]^=1;
				mat[i+1][m-1]^=1;
				res.push_back(i);
				res.push_back(m-2);
				res.push_back(i+1);
				res.push_back(m-2);
				res.push_back(i+1);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[i][m-1]==1)
			{
				mat[i][m-1]=0;
				mat[i+1][m-1]^=1;
				mat[i+1][m-2]^=1; 
				res.push_back(i);
				res.push_back(m-1);
				res.push_back(i+1);
				res.push_back(m-1);
				res.push_back(i+1);
				res.push_back(m-2);
				cnt++;
			}
		}
		while(1)
		{
			if(mat[n-2][m-2]==0 && mat[n-1][m-2]==0 && mat[n-2][m-1]==0 && mat[n-1][m-1]==0)
			{
				break;
			}
			if(mat[n-2][m-2]==1 && mat[n-1][m-2]==1 && mat[n-2][m-1]==1 && mat[n-1][m-1]==1)
			{
				mat[n-2][m-2]=0;
				mat[n-1][m-2]=0;
				mat[n-2][m-1]=0;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-1);
				res.push_back(m-2);
				res.push_back(n-2);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==1 && mat[n-1][m-2]==1 && mat[n-2][m-1]==1 && mat[n-1][m-1]==0)
			{
				mat[n-2][m-2]=0;
				mat[n-1][m-2]=0;
				mat[n-2][m-1]=0;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-1);
				res.push_back(m-2);
				res.push_back(n-2);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==0 && mat[n-1][m-2]==1 && mat[n-2][m-1]==1 && mat[n-1][m-1]==1)
			{
				mat[n-1][m-1]=0;
				mat[n-1][m-2]=0;
				mat[n-2][m-1]=0;
				res.push_back(n-1);
				res.push_back(m-1);
				res.push_back(n-1);
				res.push_back(m-2);
				res.push_back(n-2);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==1 && mat[n-1][m-2]==0 && mat[n-2][m-1]==1 && mat[n-1][m-1]==1)
			{
				mat[n-2][m-2]=0;
				mat[n-1][m-1]=0;
				mat[n-2][m-1]=0;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-1);
				res.push_back(m-1);
				res.push_back(n-2);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==1 && mat[n-1][m-2]==1 && mat[n-2][m-1]==0 && mat[n-1][m-1]==1)
			{
				mat[n-2][m-2]=0;
				mat[n-1][m-2]=0;
				mat[n-1][m-1]=0;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-1);
				res.push_back(m-2);
				res.push_back(n-1);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==0 && mat[n-1][m-2]==0 && mat[n-2][m-1]==1 && mat[n-1][m-1]==1)
			{
				mat[n-1][m-1]=0;
				mat[n-1][m-2]=1;
				mat[n-2][m-2]=1;
				res.push_back(n-1);
				res.push_back(m-1);
				res.push_back(n-1);
				res.push_back(m-2);
				res.push_back(n-2);
				res.push_back(m-2);
				cnt++;
			}
			if(mat[n-2][m-2]==1 && mat[n-1][m-2]==1 && mat[n-2][m-1]==0 && mat[n-1][m-1]==0)
			{
				mat[n-2][m-2]=0;
				mat[n-2][m-1]=1;
				mat[n-1][m-1]=1;
				res.push_back(n-1);
				res.push_back(m-1);
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-2);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==1 && mat[n-1][m-2]==0 && mat[n-2][m-1]==0 && mat[n-1][m-1]==1)
			{
				mat[n-2][m-2]=0;
				mat[n-2][m-1]=1;
				mat[n-1][m-2]=1;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-2);
				res.push_back(m-1);
				res.push_back(n-1);
				res.push_back(m-2);
				cnt++;
			}
			if(mat[n-2][m-2]==0 && mat[n-1][m-2]==1 && mat[n-2][m-1]==0 && mat[n-1][m-1]==1)
			{
				mat[n-2][m-2]=1;
				mat[n-2][m-1]=1;
				mat[n-1][m-1]=0;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-2);
				res.push_back(m-1);
				res.push_back(n-1);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==1 && mat[n-1][m-2]==0 && mat[n-2][m-1]==1 && mat[n-1][m-1]==0)
			{
				mat[n-2][m-2]=0;
				mat[n-1][m-2]=1;
				mat[n-1][m-1]=1;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-1);
				res.push_back(m-1);
				res.push_back(n-1);
				res.push_back(m-2);
				cnt++;
			}
			if(mat[n-2][m-2]==0 && mat[n-1][m-2]==1 && mat[n-2][m-1]==1 && mat[n-1][m-1]==0)
			{
				mat[n-2][m-2]=1;
				mat[n-2][m-1]=0;
				mat[n-1][m-1]=1;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-2);
				res.push_back(m-1);
				res.push_back(n-1);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==0 && mat[n-1][m-2]==0 && mat[n-2][m-1]==0 && mat[n-1][m-1]==1)
			{
				mat[n-2][m-2]=1;
				mat[n-2][m-1]=1;
				mat[n-1][m-1]=0;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-2);
				res.push_back(m-1);
				res.push_back(n-1);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==0 && mat[n-1][m-2]==0 && mat[n-2][m-1]==1 && mat[n-1][m-1]==0)
			{
				mat[n-2][m-2]=1;
				mat[n-2][m-1]=0;
				mat[n-1][m-1]=1;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-2);
				res.push_back(m-1);
				res.push_back(n-1);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==0 && mat[n-1][m-2]==1 && mat[n-2][m-1]==0 && mat[n-1][m-1]==0)
			{
				mat[n-2][m-2]=1;
				mat[n-1][m-2]=0;
				mat[n-1][m-1]=1;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-1);
				res.push_back(m-2);
				res.push_back(n-1);
				res.push_back(m-1);
				cnt++;
			}
			if(mat[n-2][m-2]==1 && mat[n-1][m-2]==0 && mat[n-2][m-1]==0 && mat[n-1][m-1]==0)
			{
				mat[n-2][m-2]=0;
				mat[n-1][m-2]=1;
				mat[n-1][m-1]=1;
				res.push_back(n-2);
				res.push_back(m-2);
				res.push_back(n-1);
				res.push_back(m-2);
				res.push_back(n-1);
				res.push_back(m-1);
				cnt++;
			}
		}
		cout<<cnt<<endl;
		for(int i=0;i<res.size();i+=6)
		{
			for(int j=i;j<i+6;j++)
			{
				cout<<res[j]<<" ";
			}
			cout<<endl;
		}
	}
}