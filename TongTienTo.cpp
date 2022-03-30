#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define N 100000
#define M 1E9 + 7
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, q, k, a[N] , b[N];
	cin >> n;
	
	for(int i=0; i<n ; i++) cin >> a[i];
	
	b[0] = a[0];
	for(int i=1; i<n ; i++){
		b[i] = b[i-1] + a[i];
	}
	cin >> q;
	while(q--){
		cin >> k ;
		cout << b[k-1] << endl;
	}
}
