#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

struct mycomp{
    bool operator()(pair<int, int> a , pair<int, int> b){
         if(a.first == b.first){
        return a.second>b.second;
    } 

    return a.first<b.first;
    }
};



int main()
{
    //OJ;
    int q;
    cin >> q;
    unordered_map<int, int> m;
    priority_queue<pair<int, int>, vector<pair<int, int>>, mycomp> pq;
    queue<int> monocarp;
    int cust = 0;
    for(int i=1; i<=q; i++){
        int type;
        cin >> type;
        if(type == 1){
            cust++;
            //Customer enters the cafe/restaurant
            int money;
            cin >> money;
            monocarp.push(cust);
            pq.push({money, cust});
            m[cust]++;
        } else if(type == 2){
            //Monocarp
            while(monocarp.size() && m.find(monocarp.front())==m.end()){
                monocarp.pop();
            }  

            cout << monocarp.front() << " ";
            auto it = m.find(monocarp.front());
            if(it!=m.end()){
                m.erase(it);
            }   
            monocarp.pop();       
        } else if(type == 3){
            //Polycarp
            while(pq.size() && m.find(pq.top().second)==m.end()){
                pq.pop();
            }

            cout << pq.top().second <<  " ";
            auto it = m.find(pq.top().second);
            if(it!=m.end()){
                m.erase(it);
            }
            pq.pop();
        }
    }
    return 0;
}