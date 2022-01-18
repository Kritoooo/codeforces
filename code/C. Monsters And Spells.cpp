/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 101
struct monster{
	ll s;
	ll h;
};
ll sum1(ll x){
	return (1+x)*x/2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,ans=0,temp=0;
		monster a[N];
		cin>>n;
		_for(i,1,n) cin>>a[i].s;
		_for(i,1,n) cin>>a[i].h;
		a[0].s=0;
		a[0].h=0;
		int temp1=0;
		_for(i,1,n){
			ll temp=a[i].h;
			_for(j,i+1,n) if(a[j].h-temp>a[j].s-a[i].s) temp=a[j].h-(a[j].s-a[i].s);
			if(a[i].s-a[i-1].s>=temp){
			    ans+=sum1(temp);
				temp1=temp;
//				cout<<ans<<endl;
		}
		else{
			ans+=sum1(temp1+a[i].s-a[i-1].s)-sum1(temp1);
//			cout<<ans<<endl;
			temp1=temp1+a[i].s-a[i-1].s;
		}
	}
	cout<<ans<<endl;
	
}
}
