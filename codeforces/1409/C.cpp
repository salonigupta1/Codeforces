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

vector<int> ans;

int diff(int x, int y, int numOfNumsInBetween, int numbersToBeAdded){
    if(numbersToBeAdded == 0 || numOfNumsInBetween==0){
        ans.push_back(x);
        ans.push_back(y);
        return y-x;
    }
    int PossibleDiv = numbersToBeAdded+1;

    while(PossibleDiv>1 && (numOfNumsInBetween%PossibleDiv!=0 || (numOfNumsInBetween%PossibleDiv==0 && PossibleDiv>numOfNumsInBetween))){
        PossibleDiv--;
    }

    if(PossibleDiv == 0){
        return numOfNumsInBetween;
    } else {
        int diff = numOfNumsInBetween/PossibleDiv;
        for(int i=x; i<=y; i+=diff){
            ans.push_back(i);
        }

        return diff;
    }

}

void addAtBeginning(int left, int dif, int x){
    for(int i=x-dif; i>0 && left>0; i-=dif){
        ans.push_back(i);
        left--;
    }
}


void addAtEnd(int left, int dif, int y){
    for(int i=y+dif; left>0; i+=dif){
        ans.push_back(i);
        left--;
    }
}

int main()
{
    //OJ;
    int t;
    cin >> t;
    while(t--){
        ans.clear();
        int n, x, y;
        cin >> n >> x >> y;
        int dif = diff(x, y, y-x, n-2);
        int reqElements = n-ans.size();
        addAtBeginning(reqElements, dif, x);
        reqElements = n-ans.size();
        addAtEnd(reqElements, dif, y);

        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}