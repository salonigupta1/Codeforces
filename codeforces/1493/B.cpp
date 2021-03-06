#include <iostream>
#include <string>
#include <set>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool isValidTime(int f, int s, int t, int fo, int h, int m){
    swap(f, s);
    swap(t, fo);
    if(f==5){
        f = 2;
    }
    else if(f==2){
        f = 5;
    }

    if(s==5){
        s = 2;
    }
    else if(s==2){
        s = 5;
    }
    if(t==5){
        t = 2;
    }
    else if(t==2){
        t = 5;
    }
    if(fo==5){
        fo = 2;
    }
    else if(fo==2){
        fo = 5;
    }

    int ans = (f*10)+s;
    int ansmin = (t*10)+fo;
    if(ans<m && ansmin<h){
        return true;
    }

    return false;
}

string time(int f, int s, int t, int fo){
    string time = to_string(f*10+s);
    string timemin = to_string(t*10+fo);
    string ans;
    if(time.size()==1){
        ans+= '0';
        ans+= time;
    } else {
        ans+= time;
    }
    ans+= ':';

    if(timemin.size()==1){
        ans+= '0';
        ans+= timemin;
    } else {
        ans+= timemin;
    }


    return ans;

}

int main()
{
   // OJ;
    int t;
    cin >> t;
    while(t--){
        double h, m;
        cin >> h >> m;
        string s;
        set<int> set;
        set.insert(0);
        set.insert(1);
        set.insert(2);
        set.insert(5);
        set.insert(8);
        cin >> s;
        int f = s[0]-'0';
        int sec = s[1]-'0';
        int third = s[3]-'0';
        int fou = s[4]-'0';
        //cout << f << endl;

        int hour = (f*10) + sec;
        int min = third*10 + fou;
       // cout << hour << endl;

        bool found = false;
        while(hour<h){
            //cout << hour << " " << min << endl;
            if(set.find(hour%10)==set.end() || set.find(hour/10)==set.end()){
                hour++;
                min = 0;
                continue;
            }
    
            while(min<m){
                if(set.find(min%10)!=set.end() && set.find(min/10)!=set.end() && isValidTime(hour/10, hour%10, min/10, min%10, h, m)){
                    found = true;
                    cout << time(hour/10, hour%10, min/10, min%10) << endl;
                    break;
                } else {
                    min++;
                }
            }

            min = 0;
            hour++;
            if(found){
                break;
            }

        }

        if(!found)
        cout << "00:00" << endl;


    }
    return 0;
}