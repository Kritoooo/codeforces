/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)

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
ll m,k,j,page[510],L[510]={0},R[510]={0},r=0,l=0;
bool check(ll x){
 	 ll temp=0;
 	 j=1;
	for(ll i=m;i>=1;i--){
		if(temp+page[i]>x){
			temp=0;j++;
		}
		temp+=page[i];
	}
	return j<=k;
}
bool cmp(ll a,ll b){
	return a>b;
}
int main(){

	m=read();k=read();
	_for(i,1,m){
	page[i]=read();
	r+=page[i];
	l=max(l,page[i]);
	}
	while(l+1<r){
//		cout<<l<<" "<<r<<endl;
		ll mid=l+(r-l)/2;
		if(check(mid)) r=mid;
		else l=mid;
	}
	j=1;ll temp=0;
	R[1]=m; 
	for(ll i=m;i>=1;i--){
		if(temp+page[i]>r){
			temp=0;
			L[j]=i+1;
			R[++j]=i;
		}
		temp+=page[i];
	}
	L[j]=1;
	for(int i=k;i>=1;i--) cout<<L[i]<<" "<<R[i]<<endl;
}
