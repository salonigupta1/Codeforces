#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

int main()
{
    //OJ;
    int n, k;
    cin >> n >> k;
    vector<long long int> arr(n);
    deque<long long int> q;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        q.push_back(arr[i]);
    }

    if(n==k){
        cout << arr[n-1] << endl;
        return 0;
    }

    //2k-n cows ek dabbe mein
    ll ex = 2*k-n, m=0;
    m = q.back();
    n-=ex;
    n--;
    int i=0;

    //baaki ko pair krege, smallest+largest
    while(i<n){
        ll j = arr[i]+arr[n];
        i++;
        n--;
        m = max(m, j);
    }

    cout << m << endl;


    
    return 0;
}