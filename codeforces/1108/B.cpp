#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
   // OJ;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int a = v[n-1];
    int j = n-2;
    while(j>0){
        if(a%v[j]==0){
            if(j>0 && (v[j-1] == v[j] || (v[j] == a))){
                break;
            } else if(j==0){
                break;
            }
        } else {
            break;
        }
        j--;
    }

    cout << a << " " << v[j] << endl;
return 0;
   
}