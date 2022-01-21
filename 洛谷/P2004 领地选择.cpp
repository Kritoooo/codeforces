/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 1005
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
ll solve(int x,int y,int c){
	return f[x+c][y+c]-f[x+c][y-1]-f[x-1][y+c]+f[x-1][y-1];
}

int main(){
	
	ll n,m,c,ans,x,y;
	cin>>n>>m>>c;
	_for(i,1,n)
	_for(j,1,m){
		ll temp;
		cin>>temp;
		f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+temp;
	}
	_for(i,1,n-c+1)
	_for(j,1,m-c+1){
		ll temp=solve(i,j,c-1);
		if(temp>=ans){
			ans=temp;
			x=i;
			y=j;
		}
	}
//	cout<<ans;
	cout<<x<<" "<<y;
}

