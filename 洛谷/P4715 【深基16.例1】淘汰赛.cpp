/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 200000 
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
	int t,n=1;
	int a[N];
	t=read();
	while(t--){
		n=n<<1;
	}
	_for(i,1,n) a[i]=read();
	int maxn=0,x,y,maxm=0;
	_for(i,1,n>>1){
		if(a[i]>maxn){
			maxn=a[i];
			x=i;
		}
	}
	_for(i,(n>>1)+1,n){
		if(a[i]>maxm){
			maxm=a[i];
			y=i;
		}
	}
	if(maxn<maxm){
		cout<<x;
	}
	else cout<<y;
	
} 
