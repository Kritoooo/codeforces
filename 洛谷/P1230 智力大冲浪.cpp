/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 501
struct nw{
	int t;
	int v;
}a[N];
bool cmp(nw x,nw y){
	return x.v>y.v;
}
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
	int m,n;
	bool vis[N]={0};
	m=read();n=read();
	_for(i,1,n) a[i].t=read();
	_for(i,1,n) a[i].v=read();
	sort(a+1,a+1+n,cmp);
	_for(i,1,n){
		bool flag=true;
		for(int j=a[i].t;j>=1;j--){
			if(!vis[j]){
				vis[j]=1;
				flag=false;
				break;
			}
		}
		if(flag){
			for(int j=n;j>=1;j--){
				if(!vis[j]){
					vis[j]=1;
					break;
				}
			}
			m-=a[i].v;
		}
	}
	cout<<m<<endl;
}
