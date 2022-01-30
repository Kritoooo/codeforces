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
	int n,a[N],b[N],f[N],ans=1,c[N]={0};
	n=read(); 
	_for(i,1,n){
		a[i]=read();
		f[a[i]]=i;
	}
	_for(i,1,n){
		b[i]=read();
	}
	c[1]=f[b[1]];
	_for(i,2,n){
		if(f[b[i]]>c[ans]){
			c[++ans]=f[b[i]];
		}
		else{
			*lower_bound(c+1,c+1+ans,f[b[i]])=f[b[i]];
		}
	}
	printf("%d",ans);
}
