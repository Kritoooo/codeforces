/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 5010
#define mod 80112002
int a[N][N],L[N]={0};
ll n,m,ans,dp[N];
bool vis[N];
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
ll dfs(int i){
	if(dp[i]) return dp[i];
	if(L[i]==0){
		return 1;
	}
	ll res=0;
	_for(j,1,L[i]){
		res+=dfs(a[i][j]);
	}
	dp[i]=res%mod;
	return res%mod;
}
int main(){

	n=read();
	m=read();
	_for(i,1,m){
		ll b,c;
		b=read();c=read();
		vis[c]=true;
		a[b][++L[b]]=c;
	}
	_for(k,1,n)
	if(!vis[k]) ans+=dfs(k)%mod;
	printf("%lld",ans%mod);
}
