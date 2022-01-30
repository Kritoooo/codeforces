/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
ll x,y,l;ll k;
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
void solve(ll x,ll y,ll a,ll b,ll l){
	if(l==1) return;
	ll len=l/2-1;
	if(x-a<=len && y-b<=len){
		printf("%lld %lld 1\n",a+l/2,b+l/2);
		solve(x,y,a,b,l/2);
		solve(a+l/2-1,b+l/2,a,b+l/2,l/2);
		solve(a+l/2,b+l/2-1,a+l/2,b,l/2);
		solve(a+l/2,b+l/2,a+l/2,b+l/2,l/2);
	}
	else if(x-a<=len && y-b>len){
		printf("%lld %lld 2\n",a+l/2,b+l/2-1);
		solve(x,y,a,b+l/2,l/2); 
		solve(a+l/2-1,b+l/2-1,a,b,l/2);
		solve(a+l/2,b+l/2-1,a+l/2,b,l/2);
		solve(a+l/2,b+l/2,a+l/2,b+l/2,l/2);
	}
	else if(x-a>len && y-b<=len){
		printf("%lld %lld 3\n",a+l/2-1,b+l/2);
		solve(x,y,a+l/2,b,l/2);
		solve(a+l/2-1,b+l/2-1,a,b,l/2);
		solve(a+l/2-1,b+l/2,a,b+l/2,l/2);
		solve(a+l/2,b+l/2,a+l/2,b+l/2,l/2);
	}
	else {
		printf("%lld %lld 4\n",a+l/2-1,b+l/2-1);
		solve(x,y,a+l/2,b+l/2,l/2);
		solve(a+l/2-1,b+l/2-1,a,b,l/2);
		solve(a+l/2-1,b+l/2,a,b+l/2,l/2);
		solve(a+l/2,b+l/2-1,a+l/2,b,l/2);
	}
}
int main(){
	scanf("%d %lld %lld",&k,&x,&y);
	l=pow(2,k);
	solve(x,y,1,1,l);
}
