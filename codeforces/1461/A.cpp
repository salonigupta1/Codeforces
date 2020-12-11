#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int i = 1;
        string s = "a";
        while(i<k){
            s += "a";
            i++;
        }
        
        int rem = n-k;
        char arr[3] = {'b', 'c', 'a'};
        i = 0;
        while(i<rem){
            s+= arr[i%3];
            i++;
        }
        
        cout << s << endl;
    }
}
