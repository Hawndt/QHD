#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define N 100000
#define M 1E9 + 7
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll q , a[N];
	
	cin >> q;
	a[0] = 1 ; a[1] = 1;
	
	for(int i=2 ; i<N ; i++) a[i] = a[i-1] + a[i-2];
	
	while(q--){
	    ll n;
	    cin >> n;
	    cout << a[n-1] % int(M)<< endl;
	}
	
}
