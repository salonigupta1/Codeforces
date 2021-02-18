#include <iostream>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

ll ask(ll l,ll r){
	if(l == r) return -1;
	cout <<"? "<< l << " " << r << endl;
	ll x;
	cin >> x;
	return x;
}
 
int main(){
    //OJ;
	ll n;
	cin >> n;
	ll pos = ask(1,n);
	if(ask(1,pos) == pos){
		ll ini = 1, fin = pos;
		while(ini < fin){
			ll mid = (ini + fin + 1)/2;
			if(ask(mid,n) == pos) ini = mid;
			else fin = mid - 1;
		}
		cout << "! " << ini << endl; 
	}
	else{
		ll ini = pos, fin = n;
		while(ini < fin){
			ll mid = (ini + fin)/2;
			if(ask(1,mid) == pos) fin = mid;
			else ini = mid + 1;
		}
		cout << "! " << ini << endl; 
	}
}