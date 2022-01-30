/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 500050
int a[N],c[N];
ll ans;
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

void Merge(int l,int r){
	if(l==r) return;
	int mid=(l+r)/2;
	int i=l,j=mid+1,k=l;
	Merge(l,mid),Merge(mid+1,r);
	while(i<=mid&&j<=r){
		if(a[i]<=a[j])
		c[k++]=a[i++];
		else c[k++]=a[j++],ans+=mid-i+1;
	}
	while(i<=mid) c[k++]=a[i++];
	while(j<=r) c[k++]=a[j++];
	_for(m,l,r){
		a[m]=c[m];
	}
}

int main(){
	int n;
	n=read();
	_for(i,1,n) a[i]=read();
	Merge(1,n);
	printf("%lld",ans);
	
}


