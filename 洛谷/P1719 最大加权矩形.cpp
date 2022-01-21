/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 121
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
ll f[N][N]={0};
ll solve(int x,int y,int x1,int y1){
	return f[x1][y1]-f[x1][y-1]-f[x-1][y1]+f[x-1][y-1];
}
int main(){
	int n;
	ll ans=0;
	cin>>n;
	_for(i,1,n)
	_for(j,1,n){
		int temp;
		cin>>temp;
		f[i][j]=f[i][j-1]+f[i-1][j]-f[i-1][j-1]+temp;
	}
	_for(i,1,n-1)
	_for(j,1,n-1)
	_for(x,i+1,n)
	_for(y,j+1,n){
		ans=max(ans,solve(i,j,x,y));
	}
	cout<<ans;
}
