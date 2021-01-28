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
   // OJ;
    long long int n;
    cin >> n;
    vector<long long int> f;
    vector<long long int> s;
    long long int s1=0, s2=0;
    long long int p;
    for(long long int i=0; i<n; i++){
        cin >> p;
        if(p>0){
            s1+=p;
            f.push_back(p);
        } else {
            s2+= (-1*p);
            s.push_back(-1*p);
        }
    }

    if(s1>s2){
        cout << "first" << endl;
    } else if(s2>s1){
        cout << "second" << endl;
    } else {
        if(s==f){
            if(p>0){
                cout << "first" << endl;
            } else {
                cout << "second" << endl;
            }
        } else {
            vector<long long int>::iterator p=f.begin();
            vector<long long int>::iterator q=s.begin();
            while(p!=f.end() || q!=s.end())
            {
                if(*p==*q)
                {
                    p++;
                    q++;
                }

                else
                {
                    if(*p>*q)
                        cout<<"first";
                    else
                        cout<<"second";

                    break;
                }

            }
        }
    }
    return 0;
}