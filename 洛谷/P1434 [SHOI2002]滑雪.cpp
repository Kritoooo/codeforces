/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 101
int map1[N][N];
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
int r,c,dp[N][N];
int dfs(int i,int j){
	if(dp[i][j]) return dp[i][j];
	int a=0,b=0,e=0,d=0,t=1;
	if(i+1<=r) a=map1[i][j]-map1[i+1][j];
	if(j+1<=c) b=map1[i][j]-map1[i][j+1];
	if(i-1>=1) 	e=map1[i][j]-map1[i-1][j];
	if(j-1>=1) 	d=map1[i][j]-map1[i][j-1];
	if(e>0) t=max(dfs(i-1,j)+1,t);
	if(a>0){
		t=max(dfs(i+1,j)+1,t);
	}
	if(b>0) t=max(dfs(i,j+1)+1,t);
	
	if(d>0) t=max(dfs(i,j-1)+1,t);
	dp[i][j]=t;
	return t;
}
int main(){
	int ans=0;
	cin>>r>>c; 
	_for(i,1,r)
	_for(j,1,c){
		cin>>map1[i][j];
	}
	_for(i,1,r)
	_for(j,1,c){
		dp[i][j]=dfs(i,j);
		ans=max(ans,dp[i][j]);
	}
//	_for(i,1,r){
//	_for(j,1,c) 
//	cout<<dp[i][j]<<" ";
//	cout<<endl;
//}
	printf("%d",ans);
	
}
