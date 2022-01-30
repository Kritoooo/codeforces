/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 100005
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
	int a[N],b[N];
	int n;
	n=read();
	_for(i,1,n) scanf("%lld",&a[i]);
	_for(i,1,n) scanf("%lld",&b[i]);
	_for(i,1,n){
		for(int j=1;j*i<=n;j++){
			q.push(a[i]+b[j]);
		}
	}
	_for(i,1,n){
		printf("%lld ",q.top());
		q.pop();
	}
	
}

