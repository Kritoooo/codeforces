/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
ll gcd (ll a, ll b) {return b==0 ? a : gcd(b, a%b);}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n%2==0) cout<<n-3<<" 2 "<<"1"<<endl;
		else {
			int i=2;
			while(gcd(i,n-i-1)==1) i++;
			cout<<i<<" "<<n-i-1<<" "<<1<<endl;
		}
	}
}

