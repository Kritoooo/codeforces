/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)

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

int main(){
	priority_queue<ll,vector<ll>,greater<ll> > q;
	ll ans=0;
	int n;
	n=read();
	_for(i,1,n) {
		ll temp;
		scanf("%lld",&temp);
		q.push(temp);
	}
	_for(i,1,n-1){
		ll a=q.top();
		q.pop();
		ll b=q.top();
		q.pop();
		ans=a+b+ans;
		q.push(a+b);
	}
	printf("%lld",ans);
}
