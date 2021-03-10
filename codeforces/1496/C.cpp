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
 

vector<double> xaxis, yaxis;
 
int main()
{
   // OJ;
    FIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a, b;
        for(int i=0; i<2*n; i++){
            cin >> a >> b;
            if(a==0){
                yaxis.push_back(abs(b));
            } else {
                xaxis.push_back(abs(a));
            }
        }
 
        sort(yaxis.begin(), yaxis.end());
        sort(xaxis.begin(), xaxis.end());
        double fin = 0.00;
        for(int i=0; i<n; i++){
            fin += sqrt(yaxis[i] * yaxis[i] + xaxis[i] * xaxis[i]); 
        }
 
        
        std::cout << std::fixed << std::setprecision(15) << fin << endl;
        xaxis.clear();
        yaxis.clear();
    }
    return 0;
}