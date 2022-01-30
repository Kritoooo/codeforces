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

int main(){
	ll a,b,p,ans=1;
	scanf("%lld%lld%lld",&a,&b,&p);
	int temp1=a,temp2=b;
	while(b>0){
		if(b%2==1){
			ans=ans*a%p;
		}
			a=a*a%p;
			b=b>>1;
	}
	ans=ans%p;
	printf("%lld^%lld mod %lld=%lld",temp1,temp2,p,ans);
}

