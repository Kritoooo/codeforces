/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 100010 
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
	int n,q,res[N],left[N],maxleft[N],a[N];
	n=read();q=read();
	_for(i,1,n){
		a[i]=read();
		
	}
	_for(i,1,n){
		left[i]=res[a[i]];
		res[a[i]]=i;
		maxleft[i]=max(maxleft[i],left[i]);
		maxleft[i]=max(maxleft[i],maxleft[i-1]);
	}
	_for(i,1,q){
		int l=read(),r=read();
		if(maxleft[r]<l) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
