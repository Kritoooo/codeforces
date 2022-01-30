/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 23
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
int a[N][N],n,b[N],res[N][N],L[N]={0},LANS[N]={0},x,ans,dp[N],spot;
void dfs(int i,int len,int sum){
	L[len]=i;
	bool flag=1;
	_for(j,1,n-i){
		if(i==0||a[i][j]){
//			cout<<i<<" "<<i+j<<endl;
			dfs(i+j,len+1,sum+b[i+j]);
			L[len+1]=0;
			flag=0;
		}
    }
    if(flag&&sum>ans){
    	ans=sum;
    	memset(LANS,0,sizeof(LANS));
    	for(int k=1;k<=len;k++)LANS[k]=L[k];
	}
	return;
}
int main(){
	n=read();
	_for(i,1,n) b[i]=read();
	_for(i,1,n-1)
	_for(j,1,n-i)
	a[i][j]=read();
	dfs(0,0,0);
	for(int i=1;LANS[i]!=0;i++){
		printf("%d ",LANS[i]);
	}
	printf("\n%d",ans);
}

