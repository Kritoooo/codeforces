/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 100010
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
	int n,w,a[N]={0},y[N]={0},ans;
	n=read();w=read();
	_for(i,1,n){
		int x,b;
		x=read();b=read();
		a[x]+=b;
	}
	_for(i,1,n){
		y[i]=y[i-1]+a[i];
	}
	for(int i=w;i<=n;i++){
		ans=max(y[i]-y[i-w],ans);
	}
	printf("%d",ans); 
}

