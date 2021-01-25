#include<iostream>
using namespace std;


#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    //OJ;
    int n, m;
    cin >> m >> n;
    bool B[m][n], A[m][n], C[m][n];
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cin >> B[i][j];
    		A[i][j] = 1;
    		C[i][j] = 0;
    	}
    }
    
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		if (B[i][j] == 0)
    		{
    			for (int k = 0; k < n; ++k)
    			{
    				A[i][k] = 0;
    			}
    			for (int k = 0; k < m; ++k)
    			{
    				A[k][j] = 0;
    			}

    		}
    	}
    }
    
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		if (A[i][j] )
    		{
    			for (int k = 0; k < n; ++k)
    			{
    				C[i][k] = 1;
    			}
    			for (int k = 0; k < m; ++k)
    			{
    				C[k][j] = 1;
    			}

    		}
    	}
    }
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		if (C[i][j] != B[i][j])
    		{
    			cout <<"NO\n";
    			return 0;
    		}
    	}
    }

    cout <<"YES\n";
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cout << A[i][j] <<" ";
    	}
    	cout << "\n";
    }

return 0;
   
}