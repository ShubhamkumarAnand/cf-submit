#include<bits/stdc++.h>
using namespace std;
 
#pragma GCC push_options
#pragma GCC optimize ("unroll-loops")
 
 
#define print(a)        for (auto x : a) cout << x << " "; cout << endl
#define print_upto(a,n)        for(int i=0;i<n;i++)    cout<<a[i]<<" "; cout<<endl
#define take(x,n)           for(int i=0;i<n;i++)  cin>>x[i];
 
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x,y) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<"\n"
 
#define ll long long
#define pie_value 3.14159265358979323846
 
int main() {
 
	// Use ctrl+shift+b ( second option )
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt" , "w" , stderr);
#endif
 
	ll t;
	cin >> t;
 
	while (t--) {
 
		string b;
		cin >> b;
 
		ll len = b.length();
 
		if (len == 2) {
			cout << b << "\n";
		} else {
 
			string a;
 
			a += b[0];
			a += b[1];
 
			for (ll i = 3; i < len; i += 2) {
				a += b[i];
			}
 
			cout << a << "\n";
		}
 
	}
 
 
	return 0;
}