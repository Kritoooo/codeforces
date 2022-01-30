/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 200005
ll a[N],b[N],n,s,L;
inline int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*f;
}
bool check(ll x){
	unsigned long long temp=0;
	_for(i,1,n){
		if(a[i]+b[i]*x>=L)
		temp=temp+a[i]+b[i]*x;
	}
	return temp<s;
}
int main(){
	ll l=0,r=1e16;
	scanf("%lld%lld%lld",&n,&s,&L);
	_for(i,1,n) {
	scanf("%lld",&a[i]);
	if(a[i]>=s&&a[i]>=L){
		cout<<0<<endl;
		return 0;
	}
}
	_for(i,1,n) scanf("%lld",&b[i]);
	while(l<r){
		ll mid=(l+r)/2;
		if(check(mid)) l=mid+1;
		else r=mid;
	}
	cout<<l<<endl;
}
