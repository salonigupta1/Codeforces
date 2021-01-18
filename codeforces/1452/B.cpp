#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    //OJ;
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int sum = 0;
        long long int count = 0;
        long long int* arr = new long long int[n];
        for(long long int i=0; i<n; i++){
            cin >> arr[i];
            sum+= arr[i];
        }

        long long int c1 = ceil((sum*1.0)/(n-1));
        long long int s = c1*(n-1);

        sort(arr, arr+n);

        if(arr[n-1]>c1){
            s = arr[n-1] * (n-1);
        }

        cout << s-sum << endl;

    }
return 0;
   
}