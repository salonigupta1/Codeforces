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
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int num;
        cin >> num;
        bool found = false;

        while (!found)
        {
            long long int n = num;
            while (n != 0)
            {
                long long int r = n % 10;
                if (r != 0)
                {
                    if (num % r != 0)
                    {
                        found = true;
                        break;
                    }
                }

                n = n / 10;
            }

            if(!found){
                break;
            }
            if(found){
                found = false;
                num = num+1;
            }

        }

        cout << num << endl;
    }
    return 0;
}