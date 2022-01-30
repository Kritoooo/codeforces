/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define mod 100003
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
	ll n,m;
	cin>>m>>n;
	ll p=n,a=m%mod;
	ll sum=1,sum1=m;
	while(p>0){
		if(p%2) sum=sum*a%mod;
			a=a*a%mod;
			p=p>>1;
	}
	p=n-1,a=(m-1)%mod;
	while(p>0){
		if(p%2) sum1=sum1*a%mod;
			a=a*a%mod;
			p=p>>1;
	}
	cout<<(sum-sum1+mod)%mod<<endl;
}
