/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 14
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

int n,b[100],c[100],d[1000],ans,a[100];

void dfs(int x){
	if(x>n-1){
		if(ans<=2){
			_for(i,0,n-1) cout<<a[i]+1<<" ";
			cout<<endl;
		}
		ans++;
		return;
	}
	else{
		_for(i,0,n-1){
			if((!c[i-x])&&(!d[x+i])&&(!b[i])){
				a[x]=i;b[i]=1;c[i-x]=1;d[x+i]=1;
				dfs(x+1);
				b[i]=0;c[i-x]=0;d[x+i]=0; 
			}
		}
	}
	
}
int main(){
	cin>>n;
	dfs(0);
	cout<<ans;
}
