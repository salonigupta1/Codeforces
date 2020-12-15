#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int arr[n];
        for(long long int i=0; i<n; i++){
            cin >> arr[i];
        }
        
        sort(arr, arr+n);
        long long int l=0, r=0;
        long long int ans = 0;
        while(l<n-2 && r<n){
            if(arr[r]-arr[l]<=2){
                ans+= ((r-l)*(r-l-1))/2;
                r++;
            } else {
                l++;
            }
        }
        
        cout << ans << endl;
    }
}