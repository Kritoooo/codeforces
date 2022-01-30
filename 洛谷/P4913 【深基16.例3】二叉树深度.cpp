/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 1000010
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

struct node{
	int left,right;
}Tree[N];
int ans;
void dfs(int a,int d){
	if(a==0) {

		return;
	}
	ans=max(ans,d);
	dfs(Tree[a].left,d+1);
	dfs(Tree[a].right,d+1);
}
int main(){
	int n;
	n=read();
	_for(i,1,n){
		Tree[i].left=read();
		Tree[i].right=read();
	}
	dfs(1,1);
	cout<<ans<<endl;
}
