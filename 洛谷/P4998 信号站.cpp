/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define L 1000000
#define N 1000009
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
	ll n,k,a[N<<1]={0},sum[N<<1]={0},num[N<<1]={0},ans=0;
	cin>>n>>k;
	_for(i,1,n){
		ll temp;
		scanf("%lld",&temp);
		a[temp+L]++;
	}
	_for(i,0,2*L){
		sum[0]+=a[i]*i;
	}
	_for(i,0,2*L){
		num[i]=num[i-1]+a[i];
	}
	_for(i,1,2*L){
		sum[i]=sum[i-1]+num[i-1]-n+num[i-1];
	}
	sort(sum,sum+2*L+1);
	_for(i,0,k-1) ans+=sum[i];
	printf("%lld",ans);
}
