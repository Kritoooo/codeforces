/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
int a[8][8];
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
int n,m,ans,sum;
int vis[8][8];
void dfs(int i,int j,int sum){
	if(j==m+1){
		dfs(i+1,1,sum);
		return;
	}
	if(i==n+1){
		ans=max(ans,sum);
		return;
	}
	dfs(i,j+1,sum);

		if(!vis[i][j]){
//			cout<<a[i][j]<<i<<" "<<j<<endl;
			vis[i-1][j]++;
			vis[i+1][j]++;
			vis[i][j+1]++;
			vis[i][j-1]++;
			vis[i+1][j+1]++;
			vis[i-1][j+1]++;
			vis[i+1][j-1]++;
			vis[i-1][j-1]++;
			dfs(i,j+1,sum+a[i][j]);
			vis[i-1][j]--;
			vis[i+1][j]--;
			vis[i][j+1]--;
			vis[i][j-1]--;
			vis[i+1][j+1]--;
			vis[i-1][j+1]--;
			vis[i+1][j-1]--;
			vis[i-1][j-1]--;
			
		}
}
int main(){
	int t;
	t=read();
	while(t--){
		ans=0;
		memset(a,0,sizeof(a));
			   memset(vis,0,sizeof(vis));
		n=read();m=read();
		_for(i,1,n)
		_for(j,1,m)
		a[i][j]=read();
		ans=0;
		dfs(1,1,0);
		printf("%d\n",ans);
	}
}

